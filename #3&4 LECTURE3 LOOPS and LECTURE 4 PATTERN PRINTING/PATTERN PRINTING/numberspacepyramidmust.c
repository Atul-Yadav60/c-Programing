#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=7;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}