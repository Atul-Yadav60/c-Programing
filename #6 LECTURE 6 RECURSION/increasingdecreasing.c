#include<stdio.h>
int inc(n){
    if(n==0) return ;
    inc(n-1);
    printf("%d\n",n);
    return;
}
int dec(n){
    if(n==0) return ;
    printf("%d\n",n);
    dec(n-1);
    return ;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    inc(n);
    dec(n);
    return 0;
}