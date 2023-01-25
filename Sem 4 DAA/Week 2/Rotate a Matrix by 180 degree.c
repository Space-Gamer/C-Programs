/*
Given a square matrix, the task is that we turn it by 180 degrees in an anti-clockwise direction without using any extra space.
Eg:
Input :  
1 2 3
4 5 6
7 8 9
Output :
9 8 7
6 5 4
3 2 1

Input Format

First Line: n, where n is the no. of rows and columns. n <=10.
Next n lines, row wise elements in matrix separated by a space.

Output Format

Matrix rotated to 180 degree anti clockwise.
*/

#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<=n/2;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            if (n%2==1 && i>=(n-1)/2 && i==j)
            break;
            if (n%2==0 && i>=(n-1)/2 && i==j-1)
            break;
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[n-i-1][n-j-1]; 
            arr[n-i-1][n-j-1] = temp;
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*
Testcase 1
Input
3
1 2 3
4 5 6
7 8 9

Output
9 8 7 
6 5 4 
3 2 1
*/
