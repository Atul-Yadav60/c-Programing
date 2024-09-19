#include<stdio.h>
#include<string.h>
int main(){
      typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[50];
    } pokemon;
     pokemon a,b,c;
     a.attack=80;
     a.hp=90;
     a.speed=100;
     strcpy(a.name,"pikachu");

    //  b.attack=a.attack;
    //  b.hp=a.hp;   // yaha sab kuch same ka a se
    //  b.speed=a.speed;
    //  strcpy(b.name,"raichu");


     // UPPER WALA LIKNE SE ACCHA HAI KI HAM NICKE WALA LIKHE  yahi structure ki 
     // property hai
     b=a;// means b me a aa gyaya.. ye ek DEEP COPY CREATE HUI HAI
         // SO JO CHANGES b me honge wahi changes a me bhi honge
     printf("%d",b.attack);


    return 0;
}