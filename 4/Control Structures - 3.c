/*
Probem Statement: Write a function to reverse a given number and check whether a given number is palindrome or not.

Input Format

N is a number

Output Format

N' is a palindrome
*/

#include <stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==temp)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT A PALINDROME");
    }

}

/*
Test Case 1:
Input:
121

Output:
PALINDROME
*/
