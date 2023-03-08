/*
Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.
Eg1: Array : 1 2 5 10
Search Element: 5
Output: 2

Eg2: Array : 1 2 5 10
Search Element: 12
Output: 4

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space
Third line: Search element for which the position has to be found in the sorted array

Output Format

Position for search element insertion
*/

#include<stdio.h>
/* if key is present in a[] then returns the index of key in a[0..n-1],
otherwise returns the index where it would be if it were inserted in order */
int findInsPos(int a[],int key,int low,int high);

int main()
{
    int n;
    int a[10];
    int key;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    int pos=findInsPos(a,key,0,n-1);
    printf("%d",pos);
}
int findInsPos(int a[],int key,int low,int high)
{
    int mid;
    while (low<high)
    {
        mid = (low+high)/2;
        if (a[mid]==key)
        {
            return mid;
        }
        else if (key>a[mid])
        {
            low = mid+1;
        }
        else if (key<a[mid])
        {
            high = mid - 1;
        }
    }
    if (a[mid] != key)
    {
        if (a[high]>key)
        {
            return high;
        }
        else if (a[low]>key)
        {
            return low;
        }
    }
    return mid;
}

/*
Testcase 1
Input
4
1 2 5 10
5

Output
2
*/
