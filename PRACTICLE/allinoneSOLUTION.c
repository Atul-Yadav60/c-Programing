//Q1. perfect square or not?
#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    printf("Enter any number:  ");
    scanf("%d",&i);
    j=sqrt(i);
    if(j*j==i){
        printf("given number is perfect square:");
    }
    else{
        printf("given number is not a perfect square:");
    }
  return 0;

}
//Q2.find sum of digit?
#include<stdio.h>
int main(){
    int i,j,sum=0;
    printf("enter any number:");
    scanf("%d",&i);
    while(i!=0){
        j=i%10;
        sum=sum+j;
        i=i/10;

    }
    printf("sum of the digit is:%d",sum);
    return 0;
}
//Q3.patten
    //      1
    //     12A
    //    123ABC
    //   1234ABCD
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=1;j<i;j++){
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    return 0;
}

//Q4.PATTERN
    //      1
    //     232
    //    34543
    //   4567654
#include<stdio.h>
int main(){
   int i,j,rows,count=0;
   printf("enter the number of rows:");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++){
    for(j=0;j<=rows-i;j++){
        printf(" ");
    }
    count=i;
    for(j=1;j<=i;j++){
        printf("%d",count++);
    }
    --count;
    for(j=1;j<i;j++){
        printf("%d",--count);
    }
    printf("\n");
   }
    return 0;
}

//  Q5. SHORT ARRY IN ASSENDING ORDER
#include<stdio.h>
int main(){
    int i,j,n,arr[100];
    printf("enter the size of arr:");
    scanf("%d",&n);
    printf("enter the elements of arrey:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elemets of arrey BEFORE shorted:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("elements of arrey AFTER shorted:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}

//Q6.length of string
#include<stdio.h>
int main(){
    int i,count=0;
    char str[100];
    printf("enter any string:");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("size of string is:%d",count-1);
    return 0;
}

//Q7.PATTERN
    // A
    // AB
    // ABC
    // ABCD
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    return 0;
} 
