
#include<stdio.h>
int main(){
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=100;i++){
        if(n%2==0){ break;} ///// ise correct karo.
         else printf("%d ",i);}
               
    
    return 0;
}