// Program 4 | Find the sum of individual digits in a given positive integer number

#include <stdio.h>

void main(){
    int n, sum=0, val=0, tmp;
    do{
        printf("Enter the positive integer number: ");
        scanf("%d", &n);
        val++;
    }while((n < 0)&&(val <= 10));
    tmp = n;
    while(n != 0){
        sum += (n%10);
        n /= 10;
    }
    
    printf("sum of individual digits in a given positive integer number %d is %d", tmp, sum);
}