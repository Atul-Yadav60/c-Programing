#include<stdio.h>

void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}

void display(int arr[],int size){
    printf("\nSorted Arrey: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    printf("Enter the size of Arrey:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of arrey: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    SelectionSort(arr,size);
    display(arr,size);
    return 0;
}