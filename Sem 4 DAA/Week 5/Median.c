/*
Median of two sorted Arrays

Given two sorted arrays, a[] and b[], find the median of these sorted arrays when merged as another sorted array.
Eg1: Array 1: 10 100
Array 2: 50 60 70
Output: 60 (It is the median of the merged sorted array: 10 50 60 70 100)

Eg1: Array 1: 10 100 200
Array 2: 50 60 65
Output: 62.5 (It is the median of the merged sorted array: 10 50 60 65 100 200)

Input Format

First line: m indicating number of elements in array 1
Second line: m sorted numbers of first array separated by space
Third line: n indicating number of elements in array 2
Fourth line: n sorted numbers of second array separated by space

Output Format

Median element of the merged sorted array
*/

#include <stdio.h>

int main()
{
    int m,n;
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
    int arr3[m+n];
    int i=0,j=0;
    int count=0;
    while (i<m || j<n)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[count++] = arr1[i++];
        }
        else
        {
            arr3[count++]= arr2[j++];
        }
    }
    if ((m+n)%2==1)
    {
        printf("%f",((float) arr3[(m+n)/2]));
    }
    else
    {
        printf("%f",((float) (arr3[(m+n)/2]+arr3[((m+n)/2)-1])/2));
    }
}

/*
Testcase 1
Input
2
10 100
3
50 60 70

Output
60.000000
*/
