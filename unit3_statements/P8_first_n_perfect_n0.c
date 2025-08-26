// Program 8 | Print first n perfect numbers

/*
A perfect number is a positive integer that equals the sum of its proper 
divisors (all positive divisors excluding the number itself). All known 
perfect numbers are even and can be generated using the formula 2^(p−1)(2^(p) − 1)
where 2^(p) − 1 is a Mersenne prime.
*/  

#include <stdio.h>

int perfectNum(int num){
    int sum =  0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if (perfectNum(i) == i){
            printf("%d is a perfect number\n", i);
        }else{
            // printf("%d is not a perfect number\n", i);
        }
    }

}