#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    return;
}
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
     int b;
    printf("enter b:");
    scanf("%d",&b);

    swap(a,b);
    
    printf("value of a after swap is %d\n",a);
     printf("value of b after swap is %d",b);
    return 0;
}