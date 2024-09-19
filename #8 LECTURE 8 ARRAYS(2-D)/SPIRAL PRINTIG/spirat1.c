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
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        //if(count>=tne) break;
        //print the maximum coloum
        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d ",a[i][maxc]);
              count++;
        }
        maxc--;
        // if(count>=tne) break;
        // print the maximum row in reverse
        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",a[maxr][j]);
             count++;
        }
        maxr--;
         //if(count>=tne) break;
        // print the mininmum left coloum in reverse
        for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",a[i][minc]);
             count++;
        }
        minc++;
        // if(count>=tne) break;
    }
    return 0;
}
// agar if comdition nahi use karna chATE HO TO for loop ke condition me && count<tne ye bhi likh do