/*
MinMax in an array

Use divide and Conquer approach to find the maximum and minimum element present in an array.

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Min element separated by space with maximum element
*/

#include <stdio.h>
#include <stdlib.h>

int * min_max(int *arr,int low,int high)
{
    int len;
    int min,max;
    len = high-low+1;
    if (len<=2)
    {
        min = arr[low]<arr[high]?arr[low]:arr[high];
        max = arr[high]>arr[low]?arr[high]:arr[low];
    }
    else if (len%2==0)
    {
        int *arr1,*arr2;
        arr1 = min_max(arr,low,high-(len/2));
        arr2 = min_max(arr,high-(len/2)+1,high);
        min = (arr1[0]<arr2[0]?arr1[0]:arr2[0]);
        max = (arr1[1]>arr2[1]?arr1[1]:arr2[1]);
    }
    else if (len%2==1)
    {
        int *arr1,*arr2;
        arr1 = min_max(arr,low,high-(len/2)-1);
        arr2 = min_max(arr,high-(len/2),high-1);
        min = (arr1[0]<arr2[0]?arr1[0]:arr2[0]);
        max = (arr1[1]>arr2[1]?arr1[1]:arr2[1]);
        min = (min<arr[high]?min:arr[high]);
        max = (max>arr[high]?max:arr[high]);
    }
    int *abc = malloc(2 * sizeof(int));
    abc[0] = min;
    abc[1] = max;
    // printf("h-%d l-%d %d %d\n",low,high,min,max);
    return abc;
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
    //int mmarr[2];
    int *mmarr;
    mmarr = min_max(arr,0,n-1);
    printf("%d %d",mmarr[0],mmarr[1]);
}

/*
Testcase 1
Input
5
50 40 10 90 30

Output
10 90
*/
