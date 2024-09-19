#include<stdio.h>
int factorial(a){
    int fact=1;
    for( int i=2;i<=a;i++){
      fact=fact*i;
    }
    return fact; 
}
int combination(int i,int j){
     int ncr= factorial(i)/(factorial(j)*factorial(i-j));
     return ncr;
}
int main(){
    int n; 
    printf("enter n:");// number of lines
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
      return 0;
} 
// ULTIMATE MEthod