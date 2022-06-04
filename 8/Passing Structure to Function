/*
Problem Statement: Write a C Program to Add  two Complex Numbers by Passing Structure to a Function

Input Format

R & I are real & imaginary part of Complex no 1
R' & I' are real & imaginary part of Complex no 2

Output Format

Sum of Complex nos
*/

#include <stdio.h>

struct cmplx
{
    float r;
    float i;
};

void add(struct cmplx n1,struct cmplx n2)
{
    float r,i;
    r = n1.r + n2.r;
    i = n1.i + n2.i;
    printf("%0.1f+%0.1fi",r,i);
}

int main()
{
    int r,i;
    scanf("%d %d",&r,&i);
    struct cmplx n1={r,i};
    scanf("%d %d",&r,&i);
    struct cmplx n2={r,i};
    add(n1,n2);
}

/*
Test Case 1:
Input:
5 4
3 2

Output:
8.0+6.0i
*/
