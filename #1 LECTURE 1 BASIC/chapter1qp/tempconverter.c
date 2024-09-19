//Q. Temp. enter in fahrenheit,convert it into degree celcious ?
#include<stdio.h>
int main(){
    float a,b;
    printf("enter the temperatur in Fahrenheit:");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("%f fehrenheit is equal to %f degree celcius. ",a,b);
}