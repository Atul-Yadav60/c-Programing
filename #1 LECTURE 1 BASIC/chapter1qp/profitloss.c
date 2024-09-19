// 15 item selling price is enter with profit. fint each item price. all item have same price?
#include<stdio.h>
int main(){
    float a,b,c,cp;  //a=selling price , cp= cost price
    printf("enter the selling price of all 15 item: "); //b=total profit , c = price of single item
    scanf("%f",&a); 
    printf("enter the total profit of 15 item: ");
    scanf("%f",&b);
    cp=a-b;
    c= cp/15;
    printf("cost of each item is %f",c);
    return 0;
}