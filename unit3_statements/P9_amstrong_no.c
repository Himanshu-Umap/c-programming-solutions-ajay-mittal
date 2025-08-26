// Program 9 | Check whether a given number is an Armstrong number or not

/*
A number is said to be an Armstrong number if the sum of cube of its digits is equal to the number itself, e.g. 153
is an Armstrong number as 153=13 +53 +33 , i.e. 153 = 1 + 125 + 27.
*/

#include <stdio.h>

int cube(int n){
    return (n*n*n);
}

int main(){
    int n, tmp, sum = 0, oNum;
    printf("Enter the number: ");
    scanf("%d", &n);
    oNum = n;
    while(n != 0){
        tmp = n % 10;
        sum += cube(tmp);
        n /= 10;
    }

    if (sum == oNum){
        printf("%d is a amstrong number.", oNum);
    }else{
        printf("%d is not a amstrong number.", oNum);
    }
}