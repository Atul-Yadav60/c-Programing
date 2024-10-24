#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int queue[MAX];
int front=-1,rear=-1;

void InsertOperation(){
     int x;
     if(rear==MAX-1){
        printf("\nQueue is full.");
    }
    else{
        printf("\nEnter the Value: ");
        scanf("%d",&x);
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=x;
        printf("\nValue Insertion successfully.");
     
    }
}

void DeleteOperation(){
    if(front==-1){
        printf("\nQueue is empty.");
    }
    else{
        int y=queue[front];
        printf("\nDeleted value is %d",y);
        if(front==rear){//queue is empty after deleton
            front=rear-1;//queue is reset
        }
        else{
            front++;
        }
        
    }
}

void DisplayOperation(){
    if(front==-1){
        printf("\nQueue is Empety.");
    }
    else{
        printf("\nThe Value in the Queue is: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice;
    printf("\nQueue Operations \n");
    printf("-------------------\n");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit.");

    while(1){
        printf("\nEnter your Choice.");
        scanf("%d",&choice);
        switch(choice){

            case 1:
               InsertOperation();
               break;
            case 2:
               DeleteOperation();
               break;
            case 3:
               DisplayOperation();
               break;
            case 4:
               exit(0);
            default :
                printf("\nInvalid Choice.");
        }
    }
    return 0;
}