//Q. star triangle printing 90 degree straight triangle
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
//Q.same question but input from user
#include<stdio.h>
int main(){
    int a;
    printf("enter the no of rows:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
//Q. SAME QUESTION BUT INVERTED TRIANGLE
#include<stdio.h>
int main(){
    int a;
    printf("kitni bar anshu lihna hai: ");
    scanf("%d",&a);
    for(int i=a;i>=0;i--){
        for(int j=1;j<=i;j++){
        printf("ANSHU ");
        }
        printf("\n");
    }
    return 0;

}