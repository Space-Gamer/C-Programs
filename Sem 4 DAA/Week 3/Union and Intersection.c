/*
Union and Intersection of array elements

Given two sorted arrays, find the union and intersection.
Example: Input: 
arr1[4] = {1, 5, 8 ,10}     arr2[3] = {7, 10, 20}
Output:  
Union = 1 5 7 8 10 20
Intersection = 10

Input Format

Input Format:
First line: 'N', indicating the number of elements in array1
Second line: N values separated by space
Third line: 'M', indicating the number of elements in array2
Fourth line: M values separated by space

Output Format

Output Format:
First line: Union of numbers
Second line: Intersection of numbers (if exists)
*/

#include <stdio.h>

void main()
{
    int n,m;
    scanf("%d",&n);
    int arr1[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&m);
    int arr2[m];
    for (int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int uni[m+n],inter[m>n?m:n];
    int i=0,j=0,count=0,count2=0,ele=-1;
    while(i<n || j<m)
    {
        if (j>=m || arr1[i]<arr2[j])
        {
            ele = arr1[i++];
        }
        else if (i>=n || arr1[i]>arr2[j])
        {
            ele = arr2[j++];
        }
        else
        {
            ele = arr1[i++];
            j++;
            inter[count2++] = ele;
        }
        if (count==0 || uni[count-1]!=ele)
        {
            uni[count++] = ele;
        }
        else if (count2==0 || inter[count2-1]!=ele)
        {
            inter[count2++] = ele;
        }
    }
    for (int i=0;i<count;i++)
    {
        printf("%d ",uni[i]);
    }
    printf("\n");
    for (int i=0;i<count2;i++)
    {
        printf("%d ",inter[i]);
    }
}

/*
Testcase 1
Input
4
1 5 8 10
3
7 10 20

Output
1 5 7 8 10 20 
10
*/
