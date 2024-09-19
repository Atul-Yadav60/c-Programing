#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter value of a:");
    scanf("%d", &a);
    printf("enter value of b:");
    scanf("%d", &b);
    printf("enter value of c:");// hear we can also use && and or or condition also.
    scanf("%d", &c);  // && and or or condition can also use for more than 2 condition.
    if (a>b && a>c){
        printf("gratest number is %d",a);
    }
    else 
    if(b>a && b>c){
        printf("greatest number is %d",b);

    } 
    else{
    printf("greatest number is %d",c);
    }
}