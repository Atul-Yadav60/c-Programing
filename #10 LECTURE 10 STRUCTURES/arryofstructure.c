#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[50];  
    } pokemon;

    pokemon arr[3];
    arr[0].attack=50;// yr pahela pokemon hai arrey ke form me
    arr[0].hp=100; 
    arr[0].speed=150;
    strcpy(arr[0].name,"pikachu");

     arr[1].attack=20;// yr dusra pokemon hai arrey ke form me
    arr[1].hp=500;
    arr[1].speed=650;
    strcpy(arr[1].name,"charizord");

     arr[2].attack=560;// yr tisra pokemon hai arrey ke form me
    arr[2].hp=200;
    arr[2].speed=9690;
    strcpy(arr[2].name,"miewtoo");
 for(int i=0;i<3;i++){
    printf("NAME:%s\n",arr[i].name);
    printf("ATTACK:%d\n",arr[i].attack);
     printf("HP:%d\n",arr[i].hp);
      printf("SPEED:%d\n",arr[i].speed);
      printf("\n");

 }
  
    return 0;
}
// ///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////
