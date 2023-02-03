/*
Duplicate element in an array

Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers.
n=7, arr[]= {1, 2, 3, 6, 3, 6, 1}
Output: 1 3 6

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Repeated elements separated by space
*/

/*

// Approach - 1. Gives duplicate elements in the order of first duplicate element found.

#include <stdio.h>

int in_list(int ele, int arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        if (ele==arr[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int main()
{
    int n,ele,count=0,count2=0;
    scanf("%d",&n);
    int arr[n],rep[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ele);
        if (in_list(ele, arr) && in_list(ele,rep)==0)
        {
            rep[count2++] = ele;
        }
        else if (in_list(ele, arr)==0)
        {
            arr[count++] = ele;
        }
    }
    for (int i=0;i<count2;i++)
    {
        printf("%d ",rep[i]);
    }
}
*/

/*
Testcase 1
Input
7
1 2 3 6 3 6 1

Output
3 6 1
*/

// Approach - 2. Gives duplicate elements in the order of the first occurance of duplaicate element.

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],uniq[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]<0)
        {
            continue;
        }
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<0)
            {
                continue;
            }
            if (arr[i]==arr[j])
            {
                arr[j] = -1;
                uniq[count++] = arr[i];
            }
        }
    }
    for (int i=0;i<count;i++)
    {
        printf("%d ",uniq[i]);
    }
}

/*
Testcase 1
Input
7
1 2 3 6 3 6 1

Output
1 3 6
*/
