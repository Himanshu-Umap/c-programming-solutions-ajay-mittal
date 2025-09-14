/*
Program 2 | Define a macro to check whether a given number is even or odd. Illustrate the use of this
macro in a program
*/


#include<stdio.h>
#define EVENODD(a) ((a)%2==0?”even”:”odd”)
main()
{
int num;
printf(“Enter a number to be checked:\t”);
scanf(“%d”, &num);
printf(“%d is an %s number”, num, EVENODD(num));
}