#include<stdio.h>
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int r=0,ld;
    while(n>0){
        ld=n%10;
        r=r+ld;
        r=r*10;
        n=n/10;

    }
    r=r/10;
    printf("the reverse of given number is %d",r);
    return 0;
}