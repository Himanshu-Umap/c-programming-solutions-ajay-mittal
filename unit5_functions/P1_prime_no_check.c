/*
Program 1 | Devise a C function that checks whether a given number is prime or not and illustrate its use
*/

#include <stdio.h>
#include <stdbool.h>

bool prime(int n){
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Enter the number greater than 2: ");
    scanf("%d", &n);
    bool val = prime(n);
    if (val == true){
        printf("%d is a prime number.", n);
    }else{
        printf("%d is not a prime number.", n);
    }

}