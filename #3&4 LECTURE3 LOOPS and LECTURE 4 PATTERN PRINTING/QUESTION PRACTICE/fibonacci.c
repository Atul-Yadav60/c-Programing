//Q. print n fibonacci series?
#include<stdio.h>
int main(){
    int n,a=1,b=1,sum=0;
    printf("enter the number of fibonacci term: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n-2;i++){   // n-2 kiya hai kyu ki a=1,b=1 two termes pahle se hi define hai
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d is sum of fibonacci series till %d term",sum,n);
}