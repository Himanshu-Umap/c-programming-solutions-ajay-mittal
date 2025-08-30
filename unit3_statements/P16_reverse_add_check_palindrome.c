/*
Program 16 | Reverse, add and check for palindrome
Problem statement: Take a number, reverse its digits and add the reverse to the original. If the sum is not a palin-
drome, repeat the procedure with the sum until the result is a palindrome. Write a program that takes a number
and gives the resulting palindrome and the number of additions it took to find it.
*/

#include <stdio.h>

int reverse(int n){
    int rev=0;
    while(n != 0){
        rev = (rev*10) + (n%10);
        n /= 10;
    }
    return rev;
}

int main(){
    int n, rev = 0, sum = 0, flag = 1;
    printf("Enter the number:\t");
    scanf("%d", &n);
    rev = reverse(n);
    sum = n + rev;
    
    while(sum != reverse(sum)){
        flag++;
        rev = reverse(sum);
        sum += rev;
    }
    
    if( sum == reverse(sum)){
        printf("%d is a resulting palindrome and the number of addition are %d", sum, flag);
    }
    return 0;
}