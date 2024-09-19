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
    //SPIRAL PRINT
    printf("\n");
    int minr =0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while(count<tne){
        // print the minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        //print the maximum coloum
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
              count++;
        }
        maxc--;
        // print the maximum row in reverse
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
             count++;
        }
        maxr--;
        // print the mininmum left coloum in reverse
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
             count++;
        }
        minc++;
    }
    return 0;
}