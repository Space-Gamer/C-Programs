/*
Problem Statement: Write a C program to Calculate the power of any number using recursion

Input Format

X: Input the base value.
Y: Input the value of the power.

Output Format

Z: Result
*/

#include <stdio.h>
int pow(int x,int y)
{
    if (y==0)
    return 1;
    if (y==1)
    return x;
    else
    return x*pow(x,y-1);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",pow(a,b));
}

/*
Test Case 1:
Input:
4
2

Output:
16
*/
