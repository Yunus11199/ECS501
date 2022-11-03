#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

#define MAX_SIZE 20


struct stackNode {
    int nodeData;
    struct stackNode *nextPtr;
};


int Top=-1, inp_array[MAX_SIZE];


void push(){
    int x;
    if(Top==MAX_SIZE-1)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter element to be inserted to the stack:\n");
        scanf("%d",&x);
        Top=Top+1;
        inp_array[Top]=x;
    }
}
void pop(){
    if(Top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Item popped: %d\n", inp_array[Top]);
        Top = Top - 1;
    }
}
void isEmpty(){
    if(Top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack is NOT Empty\n");
    }
}
void printStack(){
    if(Top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Elements in stack: \n");
        for(int i=Top;i>=0;--i)
            printf("%d\n",inp_array[i]);
    }
}

int main() {
    int input = 0;

    while(1)
    {
        printf("Please Enter numbers to perform your operation.\n");
        printf("(1) Push the element\n(2) Pop the element\n(3) Check if the stack is empty\n(4) View the stack\n(0) Exit the program\n");
        printf("Enter your option:");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                printStack();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
