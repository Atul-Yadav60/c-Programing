#include<stdio.h>
int main(){
    int n;
    printf("'enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter the marks:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            printf("\nroll number is %p",&arr[i]);
        }
    }
}