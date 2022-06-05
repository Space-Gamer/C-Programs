/*
Problem statement: Write a program to compute the GCD of 3 numbers

Input Format

A,B, C are the numbers for which GCD is to be computed

Output Format

S - Greatest Common Divisor
*/

#include <stdio.h>
void main()
{
    int a,b,c,min,gcd=1,i;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b && a<c)
    min = a;
    else if (b<a && b<c)
    min = b;
    else
    min = c;
    for (i=1;i<=min;i++)
    {
        if (a%i==0 && b%i==0 && c%i==0)
        gcd = i;
    }
    printf("%d",gcd);
}

/*
Test Case 1:
Input:
10 4 16

Output:
2
*/
