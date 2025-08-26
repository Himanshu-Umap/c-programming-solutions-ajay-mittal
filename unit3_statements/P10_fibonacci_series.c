/*
Program 10 | Fibonacci series
Fibonacci series is a series in which a term is equal to the sum of the previous two terms. The first term of the
series is 0 and the second term is 1.
*/

#include <stdio.h>

int main(){
    int n, count, term, first, second;
    printf("Enter the number of terms to print in febonacci series: ");
    scanf("%d", &n);
    first =  0, second = 1;
    if( n == 1){
        printf("%d\t", first);    
    }else if(n == 2){
        printf("%d\t%d\t", first, second);
    }else if(n <= 0){
        printf("Enter a positive number.");
    }else{
        count = 2;
        while(count <= n){
            term = first + second;
            printf("%d\t", term);
            first = second;
            second = term;
            count++;
        }
    }
}