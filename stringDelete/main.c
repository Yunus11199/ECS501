#include <stdio.h>
#include "stdlib.h"
#include "string.h"

#define MAX_INPUT 200

//defining function
int stringDelete(char *input, int pos){
    pos = pos - 1;

    int len = strlen(input);

    for (int i = pos; i < len; i++) {
        input[i] = input[i + 1];
    }

    printf("%s", input);

    return 0;
}


int main() {
    char word[MAX_INPUT];
    int pos = 0;
// taking in input
    printf("Please type in your word:");
    fgets(word, MAX_INPUT, stdin);
    printf("Please Enter the Position of the Word you would like to delete:");
    scanf("%d", &pos);
// running the function
    stringDelete(word, pos);
    return 0;
}
