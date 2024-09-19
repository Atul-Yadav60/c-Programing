#include<stdio.h>
#include<string.h>
 typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[100];
    } pokemon;
int main(){
     pokemon pikachu;
      pikachu.hp=100;
      pikachu.speed=150;
      pikachu.attack=200;
      strcpy(pikachu.name,"pikachu");
     // int*x -> address of inter value
     pokemon* x=&pikachu;
     printf("%p\n",pikachu.hp);
     printf("%p\n",pikachu.speed);
     printf("%p\n",pikachu.attack);
     printf("%p\n",pikachu.name);
     printf("%p",x);
    return 0;
}   