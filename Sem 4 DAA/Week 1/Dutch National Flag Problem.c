/*
Sort the given array a[]. Array a[] consists of only 0s, 1s, and 2s.
Eg: If the array a = { 0, 2, 1, 2, 1, 0, 0, 0, 2}
Output should be the sorted array in ascending order a = { 0, 0, 0, 0, 1, 1, 2, 2, 2}.

Input Format

First Line: No. of elements in array 1<= n <= 10
Second Line: Array elements separated by space

Output Format

Sorted array elements separated by space
*/

#include <stdio.h>

void main()
{
    int z=0,o=0,t=0;
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if (a==0)
        {
            z++;
        }
        else if (a==1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }
    for (int i=0;i<z;i++)
    {
        printf("0 ");
    }
    for (int i=0;i<o;i++)
    {
        printf("1 ");
    }
    for (int i=0;i<t;i++)
    {
        printf("2 ");
    }
}

/*
Testcase 1
Input
9
0 2 1 2 1 0 0 0 1

Output
0 0 0 0 1 1 1 2 2
*/
