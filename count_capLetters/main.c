#include <stdio.h>

int main() {
    int c, caps = 0;
    while ((c = getchar()) != EOF){
        if (c > 64 && c < 91){
            ++caps;
        }
    }
    printf("There are %d capital letters\n", caps);
    return 0;
}

/*
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
}*/
