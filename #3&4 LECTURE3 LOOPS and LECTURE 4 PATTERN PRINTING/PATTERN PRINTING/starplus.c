#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if (j==3||i==3)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;

}
// user give input
#include<stdio.h>
int main(){
    int n;
    printf("enter any  odd number >=3: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j==n/2+1||i==n/2+1)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;

}
