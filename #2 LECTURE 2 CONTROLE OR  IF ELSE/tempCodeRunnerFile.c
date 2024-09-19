#include<stdio.h> 
int main()
{
    int a,b,c,area;
    printf("enter the first side of trangle: ");
    scanf("%d",a); 
    printf("enter the third side of trangle: ");
    scanf("%d",c);
    printf("enter the second side of trangle: ");
    scanf("%d",b);
    
    if(a+b>c && b+c>a && c+a>b){
        area=0.5*a*b*c;
        printf("given sides make a regular trainagle whose area is %d",area);
    
    }   
    else{
        printf("given sides does not make any triangle");
    }
}
