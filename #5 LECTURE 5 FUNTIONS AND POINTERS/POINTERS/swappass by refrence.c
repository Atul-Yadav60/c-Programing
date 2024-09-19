#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;//*x=b ho gya hai jo a hai
    *y=temp;

    return;
}
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
     int b;
    printf("enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a after swap is %d\n",a);
     printf("value of b after swap is %d",b);
    return 0;
}