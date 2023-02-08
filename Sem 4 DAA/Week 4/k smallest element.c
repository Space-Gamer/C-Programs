/*
Find k smallest element in an array

Given an array of distinct elements and a number k where k is smaller than the size of the array, find the k’th smallest element in the given array.
Eg: 50, 40, 10, 90, 30
K=3
Output: 40 (40 is the 3rd smallest element)

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space
Third line: k value

Output Format

Kth smallest element
*/

#include <stdio.h>

int main()
{
    int n,min,temp,k;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (int i=0;i<n-1;i++) // Selection sort
    {
        min = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[min]>arr[j])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("%d",arr[k-1]);
}

/*
Testcase 1
Input
5
50 40 10 90 30
3

Output
40
*/
