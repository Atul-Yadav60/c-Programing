#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any two integers\n");
    scanf("%d%d",&a,&b);
    printf("before swaping the number\n");
    printf("a=%d  b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("number after swaping\n");
    printf("a=%d b=%d",a,b);
}
