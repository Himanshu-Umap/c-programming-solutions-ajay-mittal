// Program 11 | Find sum of all odd numbers that lie between 1 and n


#include <stdio.h>

int main(){
    int n,sum, i;
    printf("Enter the number n: ");
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while(i <= n){
        if(i%2 != 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of odd numbers from 1 to %d is %d", n, sum);
}