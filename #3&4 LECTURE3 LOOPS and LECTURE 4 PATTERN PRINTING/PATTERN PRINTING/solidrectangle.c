//Q. star in square or rectangle printing?
#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//Q. same question but take input from user
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number of stars: ");
    scanf("%d",&a);
    printf("enter the number of rows:");
    scanf("%d",b);
    for(int i=1;i<=b;i++){
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
