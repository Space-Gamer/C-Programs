/*
Find the inversion count of array a[]. Given an array a[], two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
Eg1: Consider an array a = {10, 5, 3, 2}
The inversions are: (10,5) (10,3) (10,2) (5,3) (5,2) (3,2). Therefore, inversion count is 6.
Eg2: Consider an array a ={1, 2, 3, 5}
There are no inversions. Therefore, inversion count is 0.

Input Format

First Line: No. of elements in array 1<= n <= 10
Second Line: Array elements separated by space

Output Format

Number n representing inversion count
*/

#include <stdio.h>

void main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[100];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            count++;
        }
    }
    printf("%d",count);
}

/*
Testcase 1
Input
4
10 5 3 2

Output
6
*/
