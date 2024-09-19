#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            }
            printf("\n");
        }
        
        else {
            for(int j=1;j<=i;j++){
                char a=j+64;
                printf("%c",a);
            }
            printf("\n");
        }

    
    }
    

}