//Q. WAP to find factorial?
#include<stdio.h>
int main(){
    int n,facto=1 ;
    printf("enter any number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    printf("the factorial of %d is %d",n,facto);


    return 0;
}