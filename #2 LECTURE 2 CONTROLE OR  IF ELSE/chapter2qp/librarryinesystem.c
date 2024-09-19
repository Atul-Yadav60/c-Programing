#include<stdio.h>
int main(){
    int x,y,z;
    printf("Please enter the number of days mamber is late to return book: ");
    scanf("%d",&x);
    if(x<=5){
        printf("Kindly pay the 50 paisa fine for %d day late return ",x);
        printf("\nkindly ensure that you return the books on time to avide the late fee");
    }
    else {
        if(x>5 && x<=10){
            printf("Kindly pay the 1 rupee fine for %d day late return",x);
        }
        else{
            if(x>10 && x<=30){
                printf("Kindly pay the 5 ruppe fine for %d day late return",x);
                 printf("kindly ensure that you return the books on time to avide the late fee");
            }
            else{
                if(x>30){
                    printf("Kindly pay the 50 rupee fine for %d day late return",x);
                    printf("\nsince you are return the book after %d days.There for you member ship is canclled ",x);
                }
            }
        }
    
    }
}