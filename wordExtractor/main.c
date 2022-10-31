#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

#define MAX_LIMIT 2000


// Function removing spaces from string
char * removeSpacesFromStr(char *string)
{
    // non_space_count to keep the frequency of non space characters
    int non_space_count = 0;

    //Traverse a string and if it is non space character then, place it at index non_space_count
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')
        {
            string[non_space_count] = string[i];
            non_space_count++;//non_space_count incremented
        }
    }

    //Finally placing final character at the string end
    string[non_space_count] = '\0';
    return string;
}


int main() {
    char input[MAX_LIMIT];
    printf("Enter your words seperated by commas:\n");

    fgets(input, MAX_LIMIT, stdin);

    *input = *removeSpacesFromStr(input);

    char * token = strtok(input, ",");
    // loop through the string to extract all other tokens
    while( token != NULL ) {
        printf( "%s\n", token ); //printing each token
        token = strtok(NULL, ",");
    }

    return 0;
}
