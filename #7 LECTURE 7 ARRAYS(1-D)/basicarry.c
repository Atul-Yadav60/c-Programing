#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    arr[2]=256;// {1,2,256,4,5} changed
    printf("%d",arr[2]);// out put is 3
    return 0;
}