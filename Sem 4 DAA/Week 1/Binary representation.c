/*
Find the number of binary digits in the binary representation of a positive decimal integer using recursion.

Eg: 256 in binary form is 100000000. Therefore no. of digits = 9

Input Format

Positive integer n, 1<= n <= 256

Output Format

No. of binary digits
*/

#include <stdio.h>

int divide(int n)
{
    if (n/2==0)
    {
        return 1;
    }
    else
    {
        return 1+divide(n/2);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",divide(n));
}

/*
Testcase 1
Input
256

Output
9
*/
