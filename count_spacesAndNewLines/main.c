#include <stdio.h>

int main() {
    int c, nl, space;
    nl = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
        else if ( c == ' '){
            ++space;
        }
    }
    printf("There are %d lines\n", nl);
    printf("And %d spaces\n", space);
    return 0;
}
