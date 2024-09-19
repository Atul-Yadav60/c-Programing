//Q. WAP to print all ASCII values and their equivalent (chapital)character of 26 alphabet using
// while loop ?
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        printf("%d ",i);
        char ch=(char)i;
        printf("%c\n",ch);
    }

    return 0;
}