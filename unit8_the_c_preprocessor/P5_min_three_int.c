/*
Program 5 | Define a nested macro to find the minimum of three integers. Illustrate the use of this macro
in a program
*/

//Nested macro to find the minimum of three integers
#include<stdio.h>
#define MIN2(a,b) (a<b?a:b)
#define MIN3(a,b,c) (MIN2(a,b)<c?MIN2(a,b):c)

int main()
{
    int a, b, c;
    printf("Enter three numbers:\t");
    scanf("%d %d %d", &a, &b, &c);
    printf("Minimum of %d, %d and %d is %d", a, b, c, MIN3(a,b,c));
}