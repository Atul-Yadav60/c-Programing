#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter any five digit number:");
    scanf("%d",&a);
    b=a/10000;// we can also use this same code to find sum of any five digit 
    a=a%10000;// just doing some alteration 
    c=a/1000;
    a=a%1000;
    d=a/100;
    a=a%100;
    e=a/10;
    a=a%10;
    printf("reverse of give nuumber is:%d%d%d%d%d",a,e,d,c,b);
}