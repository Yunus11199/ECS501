#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

#define MAX_LEN 200

// for unit numbers (1-9)
void units(int unit){
    char output[MAX_LEN];
    switch (unit) {
        case 1:
            strcpy(output, "one");
            break;
        case 2:
            strcpy(output, "two");
            break;
        case 3:
            strcpy(output, "three");
            break;
        case 4:
            strcpy(output, "four");
            break;
        case 5:
            strcpy(output, "five");
            break;
        case 6:
            strcpy(output, "six");
            break;
        case 7:
            strcpy(output, "seven");
            break;
        case 8:
            strcpy(output, "eight");
            break;
        case 9:
            strcpy(output, "nine");
            break;
        case 0:
            strcpy(output, "");
            break;
        default:
            printf("This is incorrect (not a unit)\n");
            break;
    }
    printf("%s", output);
}

// for teen numbers (11 - 19)
void teens(int teen){
    char output[MAX_LEN];

    switch (teen) {
        case 11:
            strcpy(output, "eleven");
            break;
        case 12:
            strcpy(output, "twelve");
            break;
        case 13:
            strcpy(output, "thirteen");
            break;
        case 14:
            strcpy(output, "fourteen");
            break;
        case 15:
            strcpy(output, "fifteen");
            break;
        case 16:
            strcpy(output, "sixteen");
            break;
        case 17:
            strcpy(output, "seventeen");
            break;
        case 18:
            strcpy(output, "eighteen");
            break;
        case 19:
            strcpy(output, "nineteen");
            break;
        default:
            printf("This is incorrect (not a teen)\n");
            break;
    }
    printf("%s", output);

}
// for multiples of 10 (10 - 90)
void tens(int ten){
    char output[MAX_LEN];

    switch (ten) {
        case 2:
            strcpy(output, "twenty ");
            break;
        case 3:
            strcpy(output, "thirty ");
            break;
        case 4:
            strcpy(output, "forty ");
            break;
        case 5:
            strcpy(output, "fifty ");
            break;
        case 6:
            strcpy(output, "sixty ");
            break;
        case 7:
            strcpy(output, "seventy ");
            break;
        case 8:
            strcpy(output, "eighty ");
            break;
        case 9:
            strcpy(output, "ninety ");
            break;
        default:
            printf("This is incorrect (not a ten)\n");
            break;
    }
    printf("%s", output);
}


int main() {
    int input;
    char output[MAX_LEN];

    scanf("%d", &input);


    if (input<10 && input>0){
        (units(input));
    }
    else if (input<20){
        (teens(input));
    }
    else if (input<100){
        int ten_input = input;
        int units_input = input;

        ten_input = (ten_input / 10);
        units_input = (units_input % 10);

        (tens(ten_input));
        (units(units_input));
    }
    else{
        printf("This is incorrect (number out of range)\n");
    }


    return 0;
}
