/*
Program 1 | Input a string and find the number of vowel(s) present in the string
*/

#include <stdio.h>

int main(){
    char string[200], ch;
    printf("Enter the string: ");
    gets(string);
    int i=0, count=0;
    while(string[i]!='\0'){
        switch(string[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;

        }
        i++;
    }
    printf("%s", string);
printf("%d vowels are present in the string", count);
}