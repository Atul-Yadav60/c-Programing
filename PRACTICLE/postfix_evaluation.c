#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define SIZE 50

char postfix[SIZE];
int stk[SIZE];
int top=-1;
 
 void push(int x){
    if(top==SIZE-1){
       printf("\nStack is full.");
    }
    else{
        top++;
        stk[top]=x;
    }
 }

 int pop(){
    if(top==-1){
        printf("\nStack is empty.");
    }
    else{
        return stk[top--];
    }
 }

int isOperator(char sym){
    if(sym=='^'||sym=='*'||sym=='/'||sym=='+'||sym=='-'){
        return sym;
    }
    else return 0;
}
void evalPost(){
    int a,b,x;
    char p;
    for(int i=0;postfix[i]!='\0';i++){
        p=postfix[i];
     if(p>=48 && p<=57){
        push(p-'0');//convert character into integer
     }
     else if(isOperator(p)){
        b=pop();
        a=pop();
        switch(p){
            case '^':
                x=(int)pow(a,b);
                break;
            case '*':
                x=a*b;
                break;
             case '+':
                x=a+b;
                break;
             case '-':
                x=a-b;
                break;
             case '/':
                x=a/b;
                if(b==0){
                    printf("\nError :Division by Zero.");
                }
                else
                x=a/b;
                break;
        }
        push(x);
     }
     else{
        printf("\nInvalid postfix Expression.");
        return;
     }
    }
    if(top!=0){
        printf("\nError:The Postfix Expression is invalid.");
    
     }

    x=pop();
    printf("\nThe Value of give expression is %d \n",x);
}

int main(){
    printf("\nEnter Any Postfix Expression: ");
    scanf("%s",postfix);

    evalPost();
    return 0;
}

/*output
  Enter Any Postfix Expression: 231*+9-

The Value of give expression is -4 

*/