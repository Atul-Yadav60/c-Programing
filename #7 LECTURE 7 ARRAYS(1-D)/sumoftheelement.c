#include<stdio.h>
int main(){
    int size,sum=0;
    printf("enter array size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("\nenter %d element:",i+1);
        scanf("%d",arr[i]);
        sum=sum+arr[i];
    }
    
    printf("sum of given input is %d",sum);
    return 0;
}