// Program 13 | Find the sum of series 1^2 + 2^2 + 3^2 + … n terms

#include <stdio.h>

int sqr(int n){
    return (n*n);
}
int main(){
    int n,sum, i;
    printf("Enter the number n: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1; i <= n; i++){
        sum +=  sqr(i);
    }
    printf("Sum of the series till %d is %d", n, sum);

}