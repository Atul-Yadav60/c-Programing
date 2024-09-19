//Q. take input percentage of a student and print grade according to marks::
#include<stdio.h>
int main(){
    int n;
    printf("please enter the marks of the student");
    scanf("%d",&n);
    if(n>=91 && n<=100){
        printf("excellent ");
    }
    else{
        if(n>=81 && n<=90){
            printf("very good");
        }
        else{
            if(n>=71 && n<=80){
                printf("good");
            }
            else{
                if(n>=61 && n<=70){
                    printf("can do better");
                }
                else{
                    if(n>=51 && n<=60){
                        printf("average");
                    }
                    else{
                        if(n>=40 && n<=50){
                            printf("below average");
                        }
                        else{
                            printf("fail");
                        }
                    }
                }
            }
        }
    }
    return 0;
}