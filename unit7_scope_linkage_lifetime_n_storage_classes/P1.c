/*
Program 1 | An instructor of a computing course wants to store and find the average of marks of all the
students appearing in an examination. As he or she does not know how many students will appear on the
examination day, he or she does not want to create a static array and waste the memory space. Solve his
or her problem by creating a dynamic array, storing the marks of the students and finding the average

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int avg, students, sum = 0;
    int *marks;

    printf("How many students have appeared for the examination: ");
    scanf("%d", &students);

    marks = (int*) malloc(students * sizeof(int));
    if (marks == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the marks of students:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", (marks + i));
        sum += *(marks + i);
    }

    avg = sum / students;
    printf("Average marks = %d\n", avg);

    free(marks);
    return 0;
}
