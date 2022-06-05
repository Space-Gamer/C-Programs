/*
Problem Statement: Write a function to display array elements in the reverse order using pointers

Input Format

N : Size of Array, +ve integer greater than 0
E :  Array Elements 

Output Format

E' - Reversed Elements
*/

#include <stdio.h>
void rev(int *a, int start, int end)
{
    int temp;
    while (start<end)
    {
        temp = *(a+start);
        *(a+start) = *(a+end);
        *(a+end) = temp;
        ++start;
        --end;
    }
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr,0,n-1);
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

/*
Test Case 1:
Input:
5
11
22
33
44
55

Output:
55
44
33
22
11
*/
