#include<stdio.h>
int main(){
    int m,n;
    printf("enter the number of rows of 1st matrix:");
    scanf("%d",&m);
    printf("enter the number of coloums of 1st matrix:");
    scanf("%d",&n); 
    int a[m][n];
    printf("\n Enter the element of matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //WAVE PRINT
    printf("\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
          }
        } 
        else{
            printf("\n");
            for(int j=n-1;j>=0;j--){
            printf("%d ",a[i][j]);

        }
        printf("\n");
    } 

}
 return 0;
}