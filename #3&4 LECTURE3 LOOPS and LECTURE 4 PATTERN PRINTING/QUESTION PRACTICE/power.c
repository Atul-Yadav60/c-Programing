#include<stdio.h>
int main(){
    int a,b;
    printf("enter base: ");
    scanf("%d",&a);
    printf("enter power: ");
    scanf("%d",&b);
    int product=1;
    for(int i=1;i<=b;i++){
        product=product*a;
    }
    printf("answer is %d",product);
}