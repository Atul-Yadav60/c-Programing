#include<stdio.h>
int  increasing(int b){
    if(b==0) return;
    increasing(b-1);
    printf("%d\n",b);
     return ; 
}
int main(){
    int b;
    printf("enter any numberr:");
    scanf("%d",&b);
    increasing(b);
}