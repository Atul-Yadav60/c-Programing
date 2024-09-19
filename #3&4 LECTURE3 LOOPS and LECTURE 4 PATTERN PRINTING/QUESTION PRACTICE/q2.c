 //Q. SUM OF GIVEN DIGIT
 #include<stdio.h>
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int sum=0;
    int ld=0;  //ld=last digit
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("the sum of digits of given number is %d",sum);
}