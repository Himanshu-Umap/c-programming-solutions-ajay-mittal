// Program 2 | Assuming that bit numbering starts from 1. Write a C program to set a particular bit in a given number

#include <stdio.h>

void main(){
    int num, bit, tmp;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit to set: ");
    scanf("%d", &bit);
    tmp = 1<<(bit-1);
    tmp = tmp|num;
    printf("%d after setting the bit %d is: %d", num, bit, tmp);
}