#include<stdio.h>
void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int swapped=0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}

void display(int arr[],int size){
    printf("\nShorted Arrey: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the size of arrey: ");
    scanf("%d",&size);
    int arr[size];
    printf("Einter the elements of the arrey : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,size);
    display(arr,size);
    return 0;
}