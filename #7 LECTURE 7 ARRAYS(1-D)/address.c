#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("\nadress id %p",&arr[i]);
    }
    return 0;
}