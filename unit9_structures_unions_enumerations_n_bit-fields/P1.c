/*
Program 1 | Define a data type for storing complex numbers and implement addition, subtraction, mul-
tiplication, conjugate and modulus operations for the defined type
*/

//Definition of complex data type and various operations applicable on it
#include<stdio.h>
#include<math.h>
#include<string.h>

struct complex
{
    int re;
    int im;

};
typedef struct complex COMP;
COMP add(COMP, COMP);
COMP sub(COMP*, COMP*);
COMP mult(COMP, COMP);
COMP conjugate(COMP);
float modulus(COMP);
void print(char* opr, COMP result, char* no=’\0’);
void printmod( char*, float);

int main()
{
    COMP no1, no2, result;
    float mod;
    printf("Enter the real and imaginary part of first complex number:\n");
    scanf("%d %d", &no1.re, &no1.im);
    printf("Enter the real and imaginary part of second complex number:\n");
    scanf("%d %d", &no2.re, &no2.im);
    result=add(no1, no2);
    print("addition", result);
    result=sub(&no1, &no2);
    print("subtraction", result);
    result=mult(no1, no2);
    print("multiplication", result);
    result=conjugate(no1);
    print("conjugate", result, "no1");
    mod=modulus(no1);
    printmod("no1",mod);
}

COMP add(COMP no1, COMP no2)
{
    COMP result;
    result.re=no1.re+no2.re;
    result.im=no1.im+no2.im;
    return result;
}

COMP sub(COMP* no1, COMP* no2)
{
    COMP result;
    result.re=no1->re-no2->re;
    result.im=no1->im-no2->im;
    return result;
}

COMP mult(COMP no1, COMP no2)
{
    COMP result;
    result.re=no1.re*no2.re – no1.im*no2.im;
    result.im=no1.re+no2.im + no1.im* no2.re;
    return result;
}

COMP conjugate(COMP no)
{
    COMP result;
    result.re=no.re;
    result.im=-no.im;
    return result;
}

float modulus(COMP no)
{
    float result;
    result=pow((no.re*no.re+no.im*no.im), 0.5);
    return result;
}

void print(char* opr, COMP res, char* no)
{
    if(strcmp(opr, "conjugate")==0)
    {
    if(res.im<0)
        printf("The result of conjugate of %s is %d%di\n",no,res.re,res.im);
    else
        printf("The result of conjugate of %s is %d+%di\n",no,res.re,res.im);
    }
    else
    {
    if(res.im<0)
        printf("The result of %s is %d%di\n",opr, res.re,res.im);
    else
        printf("The result of %s is %d+%di\n",opr, res.re,res.im);
    }
}

void printmod(char* no, float result)
{
    printf("The result of modulus of %s is %f\n", no, result);
}