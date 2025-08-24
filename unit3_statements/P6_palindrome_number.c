// Program 6 | Check whether a given number is a palindrome or not

#include <stdio.h>

//these are the the no. which remain same after reversing
void main(){
    int n, tmp, rev=0;
    //maximum number entered is (2^{31}-1), which equals (2,147,483,647)
    printf("Enter the number: ");
    scanf("%d", &n);
    tmp = n;
    while(tmp != 0){
        rev = rev*10 + (tmp%10);
        tmp /= 10;
    }
    if(n == rev){
        printf("THe number %d is palindrome.", n);
    }else{
        printf("THe number %d is not a palindrome.", n);
    }

}