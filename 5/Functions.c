/*
Problem Statement: Write a function to check whether a given number is prime and use that to find the next prime number, greater than a given number.

Input Format

X : Number to check prime or not , using this compute Y

Output Format

Y : Next Prime number
*/

#include <stdio.h>
int prime(int n)
{
    int flag = 1,i;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        flag = 0;
    }
    return flag;
}

int main()
{
    int n,flag=0;
    scanf("%d",&n);
    while (flag==0)
    {
        n++;
        flag = prime(n);
    }
    if (n==1)
    printf("2");
    else
    printf("%d",n);
}

/*
Testcase 1:
Input:
4

Output:
5
*/
