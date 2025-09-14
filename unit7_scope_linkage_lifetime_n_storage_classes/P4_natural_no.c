/*
Program 4 | Making use of recursion and static variables, print the sum of the first n natural numbers
*/

#include<stdio.h>

int natural(int n);

int main(){
    int n;
    printf("Enter the numbers to sum: ");
    scanf("%d", &n);
    int sum = natural(n);
    printf("\nSum of the first n natural number is: %d", sum);
    return 0;
}

int natural(int num)
{
    static int i=1;
    static int result=0;
    result=result+i;
    i++;
    if(i<=num)
        natural(num);
    return result;
}