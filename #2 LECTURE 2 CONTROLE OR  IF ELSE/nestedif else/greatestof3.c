#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
     printf("enter the third number");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d id the greatest number",a);
        }
        else{
            printf("%d is the greatest number",c);
        }
    }
    else{
        if(b>a){
            if(b>c){
                printf("%d is the greatest number",b);
            }
            else{
                printf("%d is the greatest number",c);
            }
        }
    }
    return 0;
}