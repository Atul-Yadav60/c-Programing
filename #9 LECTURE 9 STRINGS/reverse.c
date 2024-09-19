#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    puts("enter a string:");
    scanf("%[^\n]s",arr);
    int size=0;
    int k=0;
    while(arr[k]!='\0'){
        size++;// isse size pata chale gaa bad me ise size ka use karenge reverse printing me
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    puts("the reverse string is:");
    puts(arr);
    return 0;
}