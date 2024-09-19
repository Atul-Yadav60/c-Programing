#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    if(a>99 && a<1000){
        printf("given number is 3 digit number");
    }
    else{
        printf("given number is not a 3 digit number");
    }

}
