#include<stdio.h>
int main(){
    int n,b=1;
    printf("enter no. of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=n-i;j++){
            printf("   ");
        }
        for(int j=1;j<=b;j++){
            printf(" %d ",j);
            }
            b=b+2;
             printf("\n");
            
        }
}

    

