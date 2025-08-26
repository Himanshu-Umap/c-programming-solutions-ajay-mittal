// Program 7 | Check whether a given number is perfect or not

/*
An integer is said to be a perfect number if its factors (including 1) sum to the number, e.g. 6 is a perfect number
as 6=1+2+3, 28 is a perfect number as 28=1+2+4+7+14.
*/

/*
A perfect number is a positive integer that equals the sum of its proper 
divisors (all positive divisors excluding the number itself). All known 
perfect numbers are even and can be generated using the formula 2^(p−1)(2^(p) − 1)
where 2^(p) − 1 is a Mersenne prime.
*/  


#include <stdio.h>

void main(){
    int n, sum, num;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    num = n;
    sum = 1;    // as 1 is factor of every number except 0
    // we should divide the number starting from 2 till the number becomes 1(it should execute till the number itself (worst case))
    int i = 2;
    if (num == 0){
        printf("0 is not a perfect number.");
    }else if(num == 1){
        printf("1 is a perfect number.");
    }else{

        while(i < num){
            
            if(num%i == 0){
                sum += i;
            }
            i++;
        }
    }
    
    if (sum == n){
            printf("%d is a perfect number.", n);
    }else{
        printf("%d is not a perfect number.", n);
    }

}