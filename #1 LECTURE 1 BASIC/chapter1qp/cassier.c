// 10,50,100 notes present. widerw in hundreds. 
//find the total notes can we given in each type of currency ? 
#include<stdio.h>
int main(){
    int a,b,c,d;                                            //a=enter value 
    printf("enter the amount in hundreds:");
    scanf("%d",&a);//
    b=a/10;//10 rupee notes
    c=a/50;//50 rupee notes
    d=a/100;//100 rupee notes
    printf("%d   notes of 10 rupee will be return.",b);
    printf("\n%d  notes of 50 rupee will be return.",c);
    printf("\n%d  notes of 100 rupee will be return.",d);


    return 0;
}