#include <stdio.h>

int left(int x) {
    for (int i = 0; i <= x; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int square(int x){
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int right(int x) {
    int j;
    for (int i = 0; i < x; ++i) {
        for (j = 0; j < i; ++j) {
            printf("  ");
        }
        for (int k = x; k > j; --k) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int x = 5;
    left(x);
    square(x);
    right(x);
}





// The variable "x" declares the length of the sides