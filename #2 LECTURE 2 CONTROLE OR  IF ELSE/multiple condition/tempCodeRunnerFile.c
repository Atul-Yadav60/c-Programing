#include<stdio.h>
int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("given number is divisible by 5 and 3");
    }
    else{
        printf("given number is not divisible by 3 and 5 ");
    }
}