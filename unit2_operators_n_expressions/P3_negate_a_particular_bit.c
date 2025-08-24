// Program 3 | Assuming that bit numbering starts from 1. Write a C program to negate a particular bit in a given number

#include <stdio.h>


void main(){
    int num, bit, tmp;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit to negate: ");
    scanf("%d", &bit);
    tmp = 1<<(bit-1);
    tmp = tmp^num;
    printf("%d after negating the bit %d is: %d", num, bit, tmp);
}