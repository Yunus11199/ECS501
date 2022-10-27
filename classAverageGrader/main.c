#include <stdio.h>
#include "stdlib.h"

typedef struct {char name; int number; float marks;} student;

float average(const float x[]){
    float avg = 0;
    float total = 0;
    for (int i = 0; i < 4; ++i) {
        total = total + x[i];
    }
    avg = total/5;
    return avg;
}


int main() {
    student student1 = {'Y', 001, {10,11,12,13,14}};
    student student2 = {'K', 002, {14,15,16,17,18}};
    student student3 = {'E', 003, {7,5,6,12,8}};
    student student4 = {'A', 004, {5,1,6,5,8}};
    student student5 = {'H', 005, {14,13,12,10,8}};

    float studentMarks[5] = {
        student1.marks,
        student2.marks,
        student3.marks,
        student4.marks,
        student5.marks
    };

    char studentsNames[9] = {
            student1.name,
            student2.name,
            student3.name,
            student4.name,
            student5.name
    };


    for (int i = 0; i < 5; ++i) {
        float avg = average(&studentMarks[i]);
        printf("Name: %c , Average score: %lf\n", studentsNames[i], avg);
    }
    return 0;
}
