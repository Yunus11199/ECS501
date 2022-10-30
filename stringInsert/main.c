#include <stdio.h>
#include "stdlib.h"
#include "string.h"

#define MAX_INPUT 200

void stringInsert(char str[MAX_INPUT], char c, int position){
    int len = strlen(str);

    for (int i = str[len-1]; i > position; i--) {
        str[i] = str[i-1];
    }

    str[position]= c;

    printf("%s", str);
}



int main() {
    char input[MAX_INPUT];
    char letter;
    int pos = 0;

    printf("Please enter your string:");
    fgets(input, MAX_INPUT, stdin);
    printf("Please enter the letter you wish to insert:");
    scanf("\n%c",&letter);
    printf("Please enter the position you would like to insert your character:");
    scanf("%d",&pos);

    stringInsert(input, letter, pos-1);

    return 0;
}
