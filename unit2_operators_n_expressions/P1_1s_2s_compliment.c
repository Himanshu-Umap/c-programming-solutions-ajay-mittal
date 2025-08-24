// Program 1 | Find one's and two's complement of a number

#include <stdio.h>

void main(){
    int num, ones_cmp, two_cmp;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    ones_cmp = ~num;
    two_cmp = ones_cmp +1;
    printf("Ones complement of %d is %d\n",num, ones_cmp);
    printf("Two's complement of %d is %d\n",num, two_cmp);
}  