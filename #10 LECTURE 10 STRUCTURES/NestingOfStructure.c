#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
      typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[50];
    } pokemon;
     typedef struct legendrypokemon{
        pokemon normal;  // YAHA POKEMON KE SARI ATRIBUTES USE HUI HAI WITH SOME EXTRA 
       char ability[100];// FEATURE
    } legendrypokemon;
    typedef struct godpokemon{
        legendrypokemon legend;// YAHA LEGENDRY KE SARI ATRIBUTES USE HUI HAI WITH 
        char extra[100];       // SOME EXTRA FEATURE
    }godpokemon;
     pokemon a,b,c;
     a.attack=80;
     a.hp=90;
     a.speed=100;
     strcpy(a.name,"pikachu");

     legendrypokemon Mewtwo;
     strcpy(Mewtwo.normal.name,"MEWTWO");
     Mewtwo.normal.attack=100;
     Mewtwo.normal.hp=280;
     Mewtwo.normal.speed=500;
     strcpy(Mewtwo.ability,"Preture creation");

     godpokemon Mai;
     strcpy(Mai.legend.normal.name,"MAI");
     strcpy(Mai.extra,"RECREATION OR GIVING LIFE");
     strcpy(Mai.legend.ability,"Preture creation");
     Mai.legend.normal.attack=19999;
     Mai.legend.normal.hp=19999;
     Mai.legend.normal.speed=19999;



    return 0;
}