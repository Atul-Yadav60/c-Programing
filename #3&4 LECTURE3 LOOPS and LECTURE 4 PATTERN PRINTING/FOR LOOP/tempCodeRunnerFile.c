#include<stdio.h>
int main(){
    int n; // ITNI BAAR LOOP CHALNA HAI
    printf("enter a number:");
    scanf("%d",&n);
    //4 7 10 19 .... upto n number of termes print karana hai
    //we are going to use extra variable
    int a=4;
    for(int i=1;i<=n;i++){     // hear d is 2
        printf("%d ",a);
        a=a+3;
    } // hum for loop ke ander jiyne chahe utne statement likh sakte hai
    return 0;
}