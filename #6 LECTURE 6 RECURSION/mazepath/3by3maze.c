#include<stdio.h>
int maze(int cr, int cc,int er,int ec){  // cr=current row;cc=current coloum;er=end row;ec=end coloum
        int rightways=0;
        int downways=0;
    if(cc==ec&&cr==er) return 1;
    if(cr==er){// onlly rightways
       rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//only downways
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er&&cc<ec){
       rightways+=maze(cr,cc+1,er,ec); 
        downways+=maze(cr+1,cc,er,ec);
    }
     int totalways=rightways+downways;
     return totalways;
}
int main(){
    int a,b;
    printf("enter number of rows:");
    scanf("%d",&a);
    printf("enter number of colums:");
    scanf("%d",&b);
    int noofways=maze(1,1,a,b);//1,1= starting posotion; a,b= end position
    printf("%d",noofways);
    return 0;
}
//SEE PDF