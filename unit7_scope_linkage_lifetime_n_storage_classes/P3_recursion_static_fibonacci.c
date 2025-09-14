/*
Program 3 | Making the use of recursion and static variables, print the first n terms of Fibonacci series
*/


//Fibonacci Series

#include<stdio.h>
// #include<conio.h>

int fib(int num);

int main()
{
    int terms;
    printf("Enter the number of terms that you want to print:\t");
    scanf("%d",&terms);
    printf("%d terms of Fibonacci series are:\n");
    fib(terms);
}

int fib(int num)
{
    static int a=0;
    static int b=1;
    static int i=0;
    static int c;
    if(i==0)
    {
        printf("%d ",a);
        i++;
    }
    if(i==1)
    {
        printf("%d ",b);
        i++;
    }
    if(i<num)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        i++;
        fib(num);
    }
}


/*
// without recursion
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);
    static int i = 0;
    static int j = 1;
    static int c = 0;

    printf("%d %d ", i, j);
    for(int a=2; a<=n; a++){
        c = i+j;
        printf("%d ", c);
        i = j;
        j = c;
    }

    return 0;
}

*/