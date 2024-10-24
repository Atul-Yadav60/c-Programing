/*QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ*/
/*evaluate postfix Expresion using stack ADT*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define SIZE 100

char postfix[SIZE];
int stk[SIZE];
int top=-1;
/*PUSH OPERATION*/
void push(int x){

    if(top==SIZE-1){
        printf("\nStack is Overflow.");
    }
    else{
        top++;
        stk[top]=x;
    }
}

/*POP OPERATION*/
char pop(){
        char x;
           if(top==-1){
            printf("\nStack is empty");
            return '\0';
    }
    else{
        x=stk[top];
        top--;
        return x;

    }
}

int isoperator(char sym){
    if((sym=='^')||(sym=='*')||(sym=='/')||(sym=='+')||(sym=='-')||(sym=='%')){
        return 1;
    }
    else
    return 0;
}

void evalPost(){
    int a,b,x;
    char p;
    for(int i=0;postfix[i]!='\0';i++){
        p=postfix[i];
        if(p>=48&&p<=57){
            push(p-48);// isse char push hoga na ki uski aski value same for pop
        }
        else if(isoperator(p)){
            b=pop();
            a=pop();
            if(p=='^'){
                x=1;
                for(int j=1;j<=b;j++){
                    x=x*a;
                }
            }
            if(p=='*'){
                x=a*b;
            }
            if(p=='/'){
                x=a/b;
            }
            if(p=='%'){
                x=a%b;
            }
            if(p=='+'){
                x=a+b;
            }
            if(p=='-'){
                x=a-b;
            }
            push(x);
        }
        else{
            printf("\nInvalid Postfix expression.");
            return;
        }
    }
    x=pop();
    printf("The Value of given expression is %d ",x);
}

void main(){
    printf("\nEnter any Postfix Expression:");
    scanf("%s",postfix);
    evalPost();
}