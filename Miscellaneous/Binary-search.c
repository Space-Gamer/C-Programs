/*
Program to sort an array and find specified element position using binary search algorithm
*/

#include <stdio.h>

void lstp(int n, int *l)
{
    int i=0;
    for (i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
    printf("\n");
}

int search(int k, int n, int *arr)
{
    int mid, low=0, high=n;
    while(1)
    {
        mid = (low+high)/2;
        if (k == arr[mid])
        return mid;
        else if (mid==low && mid==high)
        return -1;
        else if (k < arr[mid])
        {
            high = mid-1;
        }
        else if (k > arr[mid])
        {
            low = mid+1;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    int i=0,j=0;
    for (i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    for (i=0;i<n;i++)
    {
        int s = i;
        for (j=i+1;j<n;j++)
        {
            
            if (ar[j]<ar[s])
            {
                s=j;
            }
        }
        int t=ar[s];
        ar[s]=ar[i];
        ar[i]=t;
    }
    printf("Sorted list is: ");
    lstp(n,ar);
    printf("Enter the number to be searched: ");
    int key;
    scanf("%d",&key);
    int ind = search(key, n, ar);
    if (ind!=-1)
    printf("%d found at postion %d",key,ind+1);
    else
    printf("%d not found in the array.",key);
}

/*
Input:
Enter the size of array: 4
Element 1: 2
Element 2: 5
Element 3: 9
Element 4: 6
Enter the number to be searched: 5

Output:
Entered array is: 2 5 9 6 
Sorted list is: 2 5 6 9 
5 found at postion 2
*/
