#include<stdio.h>
int main(){

    int arr[10]={1,3,5,6,9,4,3,6,9,5};
    int brr[10];
    for(int i=0;i<=9;i++){
        brr[i]=arr[9-i];
        printf("%d",brr[i]);
    }
    return 0;
}