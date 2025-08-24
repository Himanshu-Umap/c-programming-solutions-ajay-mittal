/*
Program 7 | Write a C program to multiply a given number with 2^n , without using a multiplication opera-
tor. The value of n will be entered by the user
*/

#include <stdio.h>

void main(){
    int n, val, res;

    printf("Enter the number to be multiplied val: ");
    scanf("%d", &val);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Left shift by n bits is equivalent to multiplication by 2
    res = val << n;
    printf("%d after multiplying 2^%d is: %d", val, n, res);

}