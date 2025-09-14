/*
Program 8 | Input a string and check whether the given string is a palindrome or not
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[200], rev[200];
    printf("Enter a string:\t");
    gets(str);
    strcpy(rev,str);
    rev=strrev(str);
    if(strcmp(str,rev)==0)
        printf("The given string is a palindrome");
    else
        printf("The given string is not a palindrome");
}