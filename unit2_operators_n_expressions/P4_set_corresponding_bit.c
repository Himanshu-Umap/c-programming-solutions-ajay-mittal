/* Program 4 | Given two numbers, say val and key. Wherever the bits of number key are 1, set the corre-
 sponding bits of number val. Leave all other bits of number val unchanged
*/

#include <stdio.h>

void main(){
    int val, key, tmp;
    printf("Enter the key: ");
    scanf("%d", &key);
    printf("Enter the value val: ");
    scanf("%d", &val);
    tmp = key|val;
    printf("%d after setting the corresponding bit from %d is: %d", val, key, tmp);
}