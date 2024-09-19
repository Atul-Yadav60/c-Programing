#include<stdio.h>
int main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    if(a<0){
        a=a*(-1);
        printf("the absolute value is ;%d",a);
    }
    else{
        printf("absolute value is :%d",a);
    }
}