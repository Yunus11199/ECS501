#include <stdio.h>
#define MAX 5 // maximum amount of letters

int main() {
    int i = 0, j = MAX-1, palindrome = 0;
    char che[MAX];
    fgets(che, MAX + 1, stdin);
    while (i != j){
        if (che[i] == che[j]){
            ++i;
            --j;
            palindrome = 1;
        }
        else{
            printf("This is not a palindrome");
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1){
        printf("This is a palindrome");
    }
    return 0;
}
