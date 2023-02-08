/*
Find min and max element in an array

Given an array of size n, find the minimum and maximum element of the array.
Eg: 50, 40, 10, 90, 30
Output: 
10
90

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

First line: Min element
Second line: Max element
*/

#include <stdio.h>

int main()
{
    int n,min,max;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i=1;i<n;i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        else if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d\n%d",min,max);
}

/*
Testcase 1
Input
5
50 40 10 90 30

Output
10
90
*/
