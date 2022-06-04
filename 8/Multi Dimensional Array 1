/*
Problem Statement: Write a C program to generate a Pascal triangle using two-dimensional array

Input Format

N - No of rows 

Output Format

N' - Pascal Triangle
*/

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    arr[0][0] = 1;
    for (i=1;i<n;i++)
    {
        for (j=0;j<(i+1);j++)
        {
            if (j==0)
            {
                arr[i][j] = arr[i-1][j];
            } 
            else if (j==i)
            {
                arr[i][j] = arr[i-1][j-1];
            }
            else
            {
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<(i+1);j++)
        {
            printf("%d",arr[i][j]);
            if (j!=(i))
            printf(" ");
        }
        if (i!=(n-1))
        printf("\n");
    }
}

/*
Test Case 1:
Input:
4

Output:
1
1 1
1 2 1
1 3 3 1

Test Case 2:
Input:
1

Output:
1
*/
