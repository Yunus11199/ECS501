#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

#define MAX_LIMIT 2000

int main() {
    FILE * fcityin; // file input
    FILE * fcityout; // file output
    //for FILE IN
    int distIN;
    char cityIN[MAX_LIMIT];
    //for FILE OUT
    int distOUT;
    char cityOUT[MAX_LIMIT];
    //reading operation
    fcityin = fopen("cities.txt", "r+"); //opening input in read mode
    fcityout = fopen("distFromLondon.txt", "w+"); // opening the output in write mode
    while (fscanf(fcityin, "%d %s", &distIN, cityIN) != EOF){
        if (distIN>100) {
            fprintf(fcityout, "%d %s\n", distIN, cityIN);
        }
    }
    fclose(fcityin); //closing file
    return 0;
}
