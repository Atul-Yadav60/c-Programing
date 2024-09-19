//Q. WAP to count digits of give number?
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n!=0){
              n=n/10;
              count++;
    }
    printf("the number of digits are %d",count);
    return 0;
}