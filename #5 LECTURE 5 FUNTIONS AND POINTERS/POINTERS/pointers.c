#include<stdio.h>
int main(){
    int a=65;
    int* x=&a;
    printf("%d\n",*x);// %p se address print hota hai
    printf("%p\n",&x);
    return 0;
}