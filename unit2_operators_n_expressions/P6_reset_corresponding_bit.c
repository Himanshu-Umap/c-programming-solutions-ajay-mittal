/*
Program 6 | Given two numbers, say val and key. Wherever the bits of number key are 1, reset (i.e. make
0) the corresponding bits of number val. Leave all other bits of number val unchanged
*/


#include <stdio.h>

void main(){
    int val, key, tmp;
    printf("Enter the key: ");
    scanf("%d", &key);
    printf("Enter the value val: ");
    scanf("%d", &val);
    tmp = ~key;
    tmp &= val;
    printf("%d after reseting the corresponding bit from %d is: %d", val, key, tmp);
}