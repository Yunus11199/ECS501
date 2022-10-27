#include <stdio.h>
#include "stdlib.h"

#define ADD(a,b) (a)+(b)
#define MINUS(a,b) (a)-(b)
#define MULTIPLY(a, b) (a)*(b)
#define DIVIDE(a, b) (a)/(b)

int main() {
    double a, b, result = 0;
    char func;
    printf("Enter a number then your operation (+, -, * or /) then your second number\n");
    scanf("%lf", &a);
    scanf("%c", &func);
    scanf("%lf", &b);

    switch(func)
    {
        case '+':
            result = ADD(a,b);
            break;
        case '-':
            result = MINUS(a,b);
            break;
        case '*':
            result = MULTIPLY(a,b);
            break;
        case '/':
            result = DIVIDE(a,b);
            break;
        default:
            printf("This is an incorrect operation\n");
    }

    printf("%fl", result);
    return 0;
}
