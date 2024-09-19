#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("%n is divisible by 3 and 5",n);
        }
        else{
            printf("%d is not divisible by 3 and 5",n);
        }
    }
    else{
        printf("%d is not divisible by 3 and 5",n);
    }
    return 0;

}
