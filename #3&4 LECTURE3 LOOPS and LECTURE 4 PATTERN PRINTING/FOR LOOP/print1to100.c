//Q. PRINT number from 1 to 100 in different lines ?
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d ",i);
    }  // for next line use \n
    return 0;
}

// print all even number from 1 to hundred
// way 1
#include<stdio.h>
int main(){
    int i;
    for(i=2;i<=100;i=i+2){
        printf("%d ",i);
    }
    return 0;
}
//way2
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0){
        printf("%d ",i);}
    }  // for next line use \n
    return 0;
}