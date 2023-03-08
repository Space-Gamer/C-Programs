/*
Find first and last position of an element in a sorted array

Given an array of integers sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return -1 -1.
You must write an algorithm with O(log n) runtime complexity.

Eg1: Array: 10 20 20 20 30 40
Target value: 20
Output: 1 3

Input Format

First line: 'N' indicating number of elements
Second line: N integers in non-decreasing order separated by space
Third line: Target value

Output Format

First position and last position separated by space
*/

#include <stdio.h>

/* if key is present in a[] then returns
the index of first occurrence of key in a[0..n-1],
otherwise returns -1 */
int firstPos(int a[], int key, int n);

/* if key is present in a[] then returns
the index of last occurrence of key in a[0..n-1],
otherwise returns -1 */
int lastPos(int a[], int key, int n);

// Driver program
int main()
{
    int n;
    int a[10];
    int key;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    printf("%d %d", firstPos(a, key, n),lastPos(a, key, n));
    return 0;
}

int firstPos(int a[], int key, int n)
{
    int pos = -1;
    int mid, low=0, high=n-1;
    while (low<=high)
    {
        mid = (low+high)/2;
        // printf("l-%d m-%d h-%d\n",low,mid,high);
        if (a[mid]==key)
        {
            pos = mid;
        }
        if (key>a[mid])
        {
            low = mid + 1;
        }
        else if (key<=a[mid])
        {
            high = mid - 1;
        }
    }
    return pos;
}

int lastPos(int a[], int key, int n)
{
    int pos = -1;
    int mid, low=0, high=n-1;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (a[mid]==key)
        {
            pos = mid;
        }
        if (key>=a[mid])
        {
            low = mid+1;
        }
        else if (key<a[mid])
        {
            high = mid - 1;
        }
    }
    return pos;
}

/*
Testcase 1
Input
6
10 20 30 40 50 60
50

Output
4 4
*/
