/*
Kth element of two sorted arrays

Given two sorted arrays of size m and n respectively, find the element that would be at the k’th position of the final sorted array.
Eg:
Array 1: 10 30 100
Array 2: 20 40 50
K=4
Final sorted array will be: 10 20 30 40 50 100 and element at position 4 is 50.

Input Format

First line: m indicating number of elements in array 1
Second line: m sorted numbers of first array separated by space
Third line: n indicating number of elements in array 2
Fourth line: n sorted numbers of second array separated by space
Fifth line: k indicating the position of the element in final sorted array to be output

Output Format

Element at kth position of the final sorted array
*/

#include <stdio.h>

int main()
{
    int m,n,k;
    scanf("%d",&m);
    int arr1[m];
    for (int i=0; i<m; i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n);
    int arr2[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    scanf("%d",&k);
    int i=0,j=0;
    int ele;
    while (k>=0)
    {
        if (arr1[i]<arr2[j])
        {
            ele = arr1[i++];
            k--;
        }
        else
        {
            ele = arr2[j++];
            k--;
        }
    }
    printf("%d",ele);
}

/*
Testcase 1
Input
3
10 30 100
3
20 40 50
4

Output
50
*/
