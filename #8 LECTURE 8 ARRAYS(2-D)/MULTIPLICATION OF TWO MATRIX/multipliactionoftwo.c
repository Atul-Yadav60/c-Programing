#include<stdio.h>
int main(){
    int n,p;
    // 1 2
    // 3 4
    // 5 6
    int a[3][2]={{1,2},{3,4},{5,6}};
    // 1 2 3 4 
    // 5 6 7 8 
    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    int res[3][4];// pahle ka row, dusrae ka coloumn
       // check multiplicationpossible or not first
     if(n!=p){
    printf("the matrices cannot  be multiplies");
     }
     else{
    // multiplication code
     // multiplying
    int cr=2;// ye a ka colum and b ka row hai jo common hona chahiye for multiplication
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            //we are intrested in  i row of a[][]and j column of b[][]
            //(a[i][0],a[i][2].....)*(b[0][j],b[1][j],.....)
            res[i][j] = 0;

            for(int k=0;k<cr;k++){
                res[i][j]+=a[i][k]*b[k][j];

            }
        }
    }
    //print resultant matrix
    // 11 14 17 20
    // 23 30 37 44
    // 35 46 57 68
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}
 return 0;
}