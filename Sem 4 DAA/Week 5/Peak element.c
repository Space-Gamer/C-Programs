/*
Peak element which is not smaller than its neighbors

Given an array of integers a[], the task is to print a list of all the peaks. A peak is an element in the array which is greater than its neighboring elements. Note that the first and the last element of the array will have a single neighbor.
Eg: Array: 50 40 10 90 30 (50 > 40 and 90 > 10 and 30)
Output: 50 90

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Peak elements separated by space (if more than one)
*/

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],peakarr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        if ((i == 0 && arr[i]>arr[i+1]) || (i == n-1 && arr[i]>arr[i-1]) || (arr[i]>arr[i+1] && arr[i]>arr[i-1]))
        {
            peakarr[count++] = arr[i];
        }
    }
    for (int i=0; i<count; i++)
    {
        printf("%d ",peakarr[i]);
    }
}

/*
Testcase 1
Input
5
50 40 10 90 30

Output
50 90
*/
