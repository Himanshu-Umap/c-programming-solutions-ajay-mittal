/*
Program 5 | Two strings are entered by the user. Dynamically create an array that holds the result of
concatenation of the entered strings
*/

#include <stdio.h>
#include<string.h>

int main(){
    char string1[100], string2[100], *resultant;
    int len1, len2;
    printf("Enter the string 1: ");
    gets(string1);
    printf("Enter the string 2: ");
    gets(string2);
    len1 = strlen(string1);
    len2 = strlen(string2);
    resultant = (char *)malloc((len1+len2+1)*sizeof(char));
    strcpy(resultant, string1);
    strcat(resultant, string2);
    printf("Concatenated string is %s:", resultant);
    return 0;
}