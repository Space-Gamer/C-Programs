/*
Missing number in an array

Given an array of size N-1, such that, it only contains distinct integers in the range of 1 to N, find the missing element.

Input Format

First line: 'N', indicating the number of elements in array
Second line: N values separated by space

Output Format

The missing number
*/

#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for (int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=1;i<=n;i++)
    {
        int flag=0;
        for (int j=0;j<n-1;j++)
        {
            if (i==arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d",i);
        }
    }
}

/*
Testcase 1
Input
5
1 3 2 5

Output
4
*/
