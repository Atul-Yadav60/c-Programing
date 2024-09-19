//Q sum of series upto n terms. 1-2+3-4+5-6.....n
// n indicates number of terms
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    // 1-2+3-4+5...
    // odd number ad ho rahe hai
    // even number subsract oh rahe hai
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
        else 
        sum=sum-i;
    }
    printf("the sum is:%d",sum);

    return 0;
}