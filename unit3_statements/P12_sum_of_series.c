// Program 12 | Find the sum of series 1+(1+2)+ (1+2+3) +(1+2+3+4)… n terms

#include <stdio.h>

int sumN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n,sum, i;
    printf("Enter the number n: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1; i <= n; i++){
        sum +=  sumN(i);
    }

    printf("Sum of the series till %d is %d", n, sum);
}