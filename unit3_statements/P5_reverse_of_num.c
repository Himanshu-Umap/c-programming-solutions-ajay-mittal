// Program 5 | Find the reverse of a given number

#include <stdio.h>

void main(){
    // to reduce space, we can only use two variables, but then the given no. will get lost
    int n, tmp, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    tmp = n;
    while(tmp != 0){
        rev = rev*10 + (tmp%10);
        tmp /= 10;
    }
    printf("Reverse of the number %d is %d", n, rev);
}