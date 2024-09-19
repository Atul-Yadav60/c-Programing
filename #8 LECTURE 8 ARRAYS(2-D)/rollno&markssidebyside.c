#include<stdio.h>
int main(){
    int rollno,marks;
    printf("enter the total number of students:");
    scanf("%d",&rollno);
    printf("enter the total number of coloums:");
    scanf("%d",&marks);
    int arr[rollno][marks];
    for(int i=1;i<=rollno;i++){
        for(int j=1;j<=marks;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the table is\n");
     for(int i=1;i<=rollno;i++){
        for(int j=1;j<=marks;j++){
            if(i==1 && j==1){
            printf("Rollno.  Marks");
            }
            else{
            printf("%d  ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}