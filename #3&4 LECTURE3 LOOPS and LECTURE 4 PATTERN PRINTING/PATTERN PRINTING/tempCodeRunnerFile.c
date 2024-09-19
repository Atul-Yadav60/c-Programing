//Q.WAY 1.. full top down method n=7 for question
#include<stdio.h>
int main(){
    int n ;
    printf("enter any odd number>=3: ");
    scanf("%d",&n); 
    int nsp=n/2;//number of spaces
    int nst=1;//nuber of spaces
    int ml=n/2+1;// middle line position.
    for(int i=1;i>=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");

        }
        printf("\n");
        }
    

        }
    
