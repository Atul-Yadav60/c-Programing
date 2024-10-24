#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

#define MAX 10

int stk[MAX];
int top = -1;

void push() {
    int x;
    if (top == MAX - 1) {
        printf("\nStack is full.");
    } else {
        printf("\nEnter the value to be put in: ");
        scanf("%d", &x);
        top++;
        stk[top] = x;
        printf("\nPushed in %d successfully", stk[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack is empty.");
    } else {
        int y = stk[top];
        top--;  // Remove the item from the stack
        printf("Poped  value is %d\n", y);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Values in stack are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stk[i]);
        }
    }
}

int main() {
    int ch;
    printf("Choose Stack Operations:\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while (1) {
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    }
}
