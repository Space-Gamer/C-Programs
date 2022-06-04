/*
Problem Statement: Write a program to sort 'N' integer values

Input Format

N- No of Inputs
A - Unsorted Input Integers 

Output Format

A'- Sorted Input Integers
*/

#include <stdio.h>

void sort(int *a, int n)
{
    int j=0,i=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if (a[j]>a[i])
            {
                int b=a[j];
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for (i;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for (i=0;i<n;i++)
    printf("%d\n",arr[i]);
}

/*
Test Case 1:
Input:
5
11
10
9
8
13

Output:
8
9
10
11
13
*/
