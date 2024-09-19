#include<stdio.h>
typedef int* pointer;
int main(){
    int x=210;
    int y=354;
   // int* a=&x,b=&y;
   pointer a=&x,b=&y;// coputer read it as int* a and int b
    //int* b=&y;
    printf("%p\n",a);
     printf("%p\n",b);

    return 0;

}