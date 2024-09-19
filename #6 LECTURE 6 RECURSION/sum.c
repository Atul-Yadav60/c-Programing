#include<stdio.h>
int sum(n){
     if(n==0) return;
     int recAns=n+sum(n-1);
    return recAns;

}
int main(){
    int n,a;
    printf("enter n:");
    scanf("%d",&n);
    a=sum(n);
    printf("sum  %d is %d",n,a);
}