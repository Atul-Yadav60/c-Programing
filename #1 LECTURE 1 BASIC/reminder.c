#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("enter the distance between two citiese in km: ");
    scanf("%f",&a);
    b=1000*a;// for metere
    c=3280.8399*a;// for foot
    d=39370.0787*a;//for inches
    e=100000*a;//for cenetemeter
    printf("%f is in meter is %f",a,b);
    printf("\n%f is in foot is %f",a,c);
    printf("\n%f is in inches is %f",a,d);
    printf("\n%f is in centimeter is %f",a,e);
    



}