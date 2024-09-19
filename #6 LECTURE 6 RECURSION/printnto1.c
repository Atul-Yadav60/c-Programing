#include<stdio.h>
int dicreasing(n){
    if(n==0) return;
    printf(" %d \n",n);
    dicreasing(n-1);
    return ;
}
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    dicreasing(n);
    
     return ;
}