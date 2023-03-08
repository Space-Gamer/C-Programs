/*
Single element in a sorted array

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space. 

Eg: Array: 10 10 20 20 30 40 40
Output: 30

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Number appearing exactly once
*/

#include <stdio.h>

// Function to find the element that appears only once
int searchSingle(int* a, int low, int high);

// Driver code
int main()
{
    int n;

    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ele=searchSingle(a,0,n-1);
    printf("%d",ele);
    return 0;
}

int searchSingle(int* a, int low, int high)
{
    int n,mid;
    n = high-low+1;
    // Array or subarray size will always be odd since it contains atleast one single element at a time
    while (high>low)
    {
        mid = (high+low)/2;
        // printf("l-%d m-%d h-%d\n",low,mid,high);
        if (a[mid]!=a[mid-1] && a[mid]!=a[mid+1])
        {
            return a[mid];
        }
        else if (mid%2 == 0) 
        {
            if (a[mid]==a[mid-1]) //Single element in left subarray
            {
                high = mid-2;
            }
            else //Single element in right subarray
            {
                low = mid+2;
            }
        }
        else
        {
            if (a[mid]==a[mid-1]) //Single element in right subarray
            {
                low = mid+1;
            }
            else //Single element in left subarray
            {
                high = mid-1;
            }
        }
    }
    return a[high];
}

/*
Testcase 1
Input
7
10 10 20 20 30 30 40

Output
40
*/
