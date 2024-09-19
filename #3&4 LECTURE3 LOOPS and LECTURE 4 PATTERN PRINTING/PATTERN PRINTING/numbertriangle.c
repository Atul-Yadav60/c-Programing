//Q. Number triangle
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");

    }
    return 0;
}
//Q.same question but invert triangle
#include<stdio.h>
int main(){
    int a;
    printf("enter number of rows: ");
    scanf("%d",&a);
    for(int i=a;i>=0;i--){
        for(int j=1;j<=i;j++){
        printf("%d ",j);
        }
        printf("\n");
    }
    return 0;

}