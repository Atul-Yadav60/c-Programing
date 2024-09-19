#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[50];
    } pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.attack=200;
    p.hp=250;
    p.speed=300;// ye naya pokimon bana hai jo pikachu ki copy hai
    // matlab hear PASS BY VALUE hua hai kyuki value change nahu hui hai
}
  
int main(){

    pokemon pikachu;
    pikachu.hp=100;
    pikachu.attack=150;
    pikachu.speed=200;
    change(pikachu);
     printf("%d\n",pikachu.hp);
     printf("%d\n",pikachu.attack);
      printf("%d\n",pikachu.speed);
    //  fun(pikachu);
  

    return 0;
}