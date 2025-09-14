/*
Program 1 | Define a macro to find the greatest of the two given numbers. Illustrate the use of this macro
in a program
*/

#include <stdio.h>
#define gretestInt(x, y) (x>y? x:y);  
int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    int ans = gretestInt(a, b);
    printf("The greatest of the two given numbers is: %d", ans);
    return 0;
}