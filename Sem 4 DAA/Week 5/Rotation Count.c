/*
Rotation Count in sorted array

Given an array arr[] of size N having distinct numbers sorted in increasing order and the array has been right rotated (i.e, the last element will be cyclically shifted to the starting position of the array) k number of times, the task is to find the value of k.
Eg: Array 50 60 10 20 30 
(Original array 10, 20, 30, 50, 60 on right rotating twice we get 50 60 10 20 30)

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

The number indicating the number of rotations
*/

#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=n-1;
    for (int i=0;i<n-1;i++)
    {
        if (arr[max]<arr[i])
        {
            max = i;
        }
        else if (max!=n-1)
        {
            break;
        }
    }
    if (max == n-1)
    {
        max = -1;
    }
    printf("%d",max+1);
}

/*
Testcase 1
Input
5
50 60 10 20 30

Output
2
*/
