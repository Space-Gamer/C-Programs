/*
Maximum Sub Array Sum

You are given an array that may contain both positive and negative integers. Find the sum of contiguous sub array of numbers which has the largest sum.
Eg: Array : -5 2 -1 10
Max sub array sum is by adding 2, -1, 10.
Output: 11 

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

An integer representing maximum sub array sum
*/

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0,sub_arr_sum=0;
    for (int i=0;i<n;i++)
    {
        sub_arr_sum += arr[i];
        if (sub_arr_sum<0)
        {
            sub_arr_sum = 0;
        }
        else if(sub_arr_sum>max)
        {
            max = sub_arr_sum;
        }
    }
    printf("%d",max);
}

/*
Testcase 1
Input
4
-5 2 -1 10

Output
11
*/
