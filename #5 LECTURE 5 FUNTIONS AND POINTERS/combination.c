#include<stdio.h>
int factorial(a){
    int fact=1;
    for( int i=2;i<=a;i++){
      fact=fact*i;
    }
    return fact; 
}
int combination(int n,int r){
     return  factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    
    
    int ncr = combination(n,r);
    printf("factoreal is %d",ncr);
    return 0;
}