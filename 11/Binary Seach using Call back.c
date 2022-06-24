/*
Problem Statement: Implement a binary search using callbacks

Input Format

k - the size of the array
N - input elements
key - element to be searched

Output Format

print " FOUND" and with its position
else
print "NOT FOUND"
*/

#include <stdio.h>

void bubsort(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<(n-i);j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int bin_search(int arr[], int key, int n, void (*sort)(int*, int))
{
    sort(arr,n);
    int mid,low=0,high=n-1;
    while(1)
    {
        mid = (low+high)/2;
        if (key == arr[mid])
        return mid;
        else if (low==mid && mid==high)
        return -1;
        else if (key < arr[mid])
        high = mid-1;
        else if (key > arr[mid])
        low = mid+1;
        //printf("%d %d %d",low,mid,high);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,res;
    scanf("%d",&key);
    res = bin_search(arr,key,n,bubsort);
    if (res==-1)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("FOUND\n");
        printf("%d",res);
    }
}

/*
Testcase 1
Input
5
1
2
3
4
5
3

Output
FOUND
3
*/
