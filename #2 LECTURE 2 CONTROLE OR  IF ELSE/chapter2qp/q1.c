//Q. steel ?
#include<stdio.h>
int main(){
    int a,c;
    float b;
    printf("enter the value of hardness: ");//a=hardness
    scanf("%d",&a);
    printf("enter the value of carbon content: ");//b=carbon content
    scanf("%f",&b);
    printf("enter the value of tensile strength: ");//c=tensile strenth
    scanf("%d",&c);
     if(a>50 && b<0.7 && c>5600){
        printf("it is GRADE 10 steel");
     }
     else{
        if(a>50 && b<0.7 ){
            printf("it is GRADE 9 steel");
        }
        else{
            if( b<0.7 && c>5600){
                printf("it is GRADE 8 steel");
            }
            else{
                if(a>50  && c>5600){
                    printf("it is GRADE 7 steel");
                }
                else{
                    if(a>50 || b<0.7 || c>5600){
                        printf("it is GRADE 6 steel");
                    }
                    else{
                        printf("it is GRADE 5 steel");
                    }
                    
                }
            }
            
            
        }
     }
     
     
      

return 0;      
}
