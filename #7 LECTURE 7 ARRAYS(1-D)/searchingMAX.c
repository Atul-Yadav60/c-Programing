#include<stdio.h>
int main(){
    int max=-1;
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<=3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    printf("max number of given input is %d",max);
    return 0;
}