/*
Set Matrix Zeros

Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's. You must do it in place.
Eg:
1 0 1
1 1 1
1 1 1
Output: (set first row and second column to all zeros)
0 0 0
1 0 1
1 0 1

Input Format

First line: m n, 'm' indicating the no. of rows, separated by a space with 'n' indicating the no. of columns 1 <= m, n <= 50
Next m lines: n numbers in each line separated by space

Output Format

Output with m*n elements in matrix format
Each of the m lines containing n numbers separated by space
*/

#include <stdio.h>

int main()
{
    int m,n,min,max,count;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int a[m],b[n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (arr[i][j]==0)
            {
                a[count] = i;
                b[count] = j;
                count++;
            }
        }
    }
    int x,y;
    for (int p=0;p<count;p++)
    {
        x = a[p];
        y = b[p];
        for (int i=0;i<m;i++)
        {
            arr[i][y] = 0;
        }
        for (int j=0;j<n;j++)
        {
            arr[x][j] = 0;
        }
    }
    for (int i=0;i<m;i++)
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
3 3
1 0 1
1 1 1
1 1 1

Output
0 0 0 
1 0 1 
1 0 1
*/
