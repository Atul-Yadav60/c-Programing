#include<stdio.h>
int main(){
    int n;
    printf("enter percentage");
    scanf("%d",&n);
    if(n>90){
        printf("A grade\n");
    }
    else if(n>80){
        printf("B grade\n");
    }
     else if(n>70){
        printf("C grade\n");
    }
    else if(n>60){
        printf("D grade\n");
    }
     else if(n>50){
        printf("E grade\n");
    }
     else if(n>40){
        printf("F grade\n");
    }
     else if(n<40){
        printf("FAIL\n");
    }
}