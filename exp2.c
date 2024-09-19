#include<stdio.h>
int stack[100],choice,max,top,data,i;
int main(){
    top=-1;
    printf("\n enter the size of STACK[MAX=100]:");
    scanf("%d",&max);
    printf("\n\tSTACK OPERATION USING ARREY");
    printf("\n\t-----------------");
    printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
    do{
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                if(top>=max-1){
                    printf("\nSTACK is over flow:");
                }
                else{
                    printf("enter the value to be pushed:");
                    scanf("%d",&data);
                    top++;
                    stack[top]=data;
                }
                break;

            }
            case 2:{
                if(top<=-1){
                    printf("\n\tSTACK is under flow.");
                }
                else{
                    printf("\n\tthe POPPED element is %d",stack[top]);
                    top--;
                }
                break;
            }
            case 3:{
                if(top>=0){
                    printf("the element in the STACK is:");
                    for(i=top;i>=0;i--)
                        printf("\n%d",stack[i]);
                        printf("\npress next choice:");
                }
                else{
                    printf("\nthe STACK is empty.");
                }
                break;
            }
            case 4:{
                printf("\n\tEXIT POINT.");
                break;
            }
            default:{
                printf("\n\tPlease Enter a Valid Choice(1/2/3/4).");
            }

        }
    }
    while(choice!=4);
    return 0;
}

