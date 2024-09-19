#include<stdio.h>
int main(){
    struct pokemon{//user define data type
        int hp;
        int speed;
        int attack;
        char tier;//
    } pikachu,charizard;
    
    //struct pokemon pikachu;
    printf("Enter pikachu attack:");
    scanf("%d",&pikachu.attack);
    //pikachu.attack=60;
    pikachu.hp =100;
    pikachu.speed=120; 
    pikachu.tier='A';
    printf("%d",pikachu.attack);

   // struct pokemon charizard;
    charizard.attack=100;
    charizard.hp=150;
    charizard.speed=200;
    charizard.tier='S';
    
    

    return 0;
}