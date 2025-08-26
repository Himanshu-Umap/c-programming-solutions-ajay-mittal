// Program 14 | Find the sum of series 1+1/2+1/3+… n terms

#include <stdio.h>

int main(){
    int n;
    float sum;
    printf("Enter the number n: ");
    scanf("%d", &n);
    sum = 0.00;
    for (int i = 1; i <= n; i++){
        sum +=  (1/(float)i);
    }
    printf("Sum of the series till 1/%d is %.2f", n, sum);

}