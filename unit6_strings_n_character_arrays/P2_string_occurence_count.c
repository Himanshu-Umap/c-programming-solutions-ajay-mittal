    /*
    Program 2 | Input a string and count the number of occurrences of a particular character in the string
    */
#include <stdio.h>

int main(){
    char string[200], ch;
    printf("Enter the string: ");
    gets(string);
    int i=0, count=0;
    printf("Enter the character(only 1st will be considered if multiple are input): ");
    scanf("%c", &ch);    
    while(string[i] != '\0'){
        if(string[i] == ch){
            count++;
        }
        i++;
    }
    printf("number of occurrences of a particular character in the string are %d", count);
}