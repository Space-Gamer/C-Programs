/*
Problem Statement: Write a program to create a simple calculator

Input Format

A & B are operands and C is an operator

Output Format

R is the result after the computation.
*/

#include <stdio.h>

void main()
{
    //%0.1f
    float a,b,res;
    char oq;
    scanf("%f %f %c",&a,&b,&oq);
    switch (oq)
    {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            res=a/b;
            break;
    }
    printf("%0.1f",res);
}

/*
Test Case 1
Input:
2.0
3.0
*

Output:
6.0
*/
