//Q. check given number is prime number or not ?
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("our number %d is composit",n);
            break;
        }
        else{
            printf("our number %d is prime number",n);
            break;
        }
    }
    return 0;
}
// WAY 2
#include<stdio.h>
int main(){
    int n , a=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;}
        }
        if(a==0) printf("our number %d is prime number",n);
               
               else printf("given number is composit");
               
    
    return 0;
}