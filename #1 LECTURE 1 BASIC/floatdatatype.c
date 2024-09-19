#include<stdio.h>
int main()
{
float x,y,a,b,c,d;
printf("enter the value of x: ");
printf("\nenter the value of y: ");
scanf("%f%f",&x,&y);
a=x+y;
b=x-y;
c=x*y;
d=x/y;
printf("the sum of given two number is %f\n",a);
printf("the substraction of given two number is %f\n",b);
printf("the multiplication of given two number is %f\n",c);
printf("the divide of given two number is%f\n",d);
return 0;
}