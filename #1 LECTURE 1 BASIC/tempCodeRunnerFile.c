#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter any four digit number:");
    scanf("%d",&a);
    b=a/1000;
    a=a%1000;
    a=a%100;
    a=a%10;
    sum=a+b;
    printf("the sum of first and last digit of given number is %d\n",sum);
}