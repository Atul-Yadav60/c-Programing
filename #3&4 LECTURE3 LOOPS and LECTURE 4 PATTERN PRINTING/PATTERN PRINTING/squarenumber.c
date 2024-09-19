//Q.number printing
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%d",j);//agar printf me j liko gey to sirf j hi print hoga
        }                 // na ki uski numerical value
        printf("\n");
    }
    return 0;

}
//Q. same question input from user
#include<stdio.h>
int main(){
      int a,b;
      printf("inter the number of rows; ");
      scanf("%d",&a);
      printf("enter number of coloums:");
      scanf("%d",&b);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("%d ",j);//agar printf me j liko gey to sirf j hi print hoga
        }                 // na ki uski numerical value
        printf("\n");
    }
    return 0;
}
