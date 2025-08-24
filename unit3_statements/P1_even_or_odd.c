// Program 1 | Check whether a given number is even or odd without using modulus operator

#include <stdio.h>

void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    // if the lsb is 0: no. is even else odd
    if((n&1) == 0){
        printf("Number %d is even", n);
    }else{
        printf("Number %d is odd", n);
    }
}