/*
Count number of islands where every island is row-wise and column-wise separated.

Given a rectangular matrix which has only two possible values 1 and 0. The values 1 always appear in form of rectangular islands and these islands are always row-wise and column-wise separated by at least one line of 0s. Note that islands can only be diagonally adjacent. Count the number of islands in the given matrix.
Eg 1:
mat[M][N] =  {{0, 0, 0},
{1, 1, 0},
{1, 1, 0},
{0, 0, 1},
{0, 0, 1},
{1, 1, 0} 
};
Output: Number of islands is 3

Eg 2:
mat[M][N] =  {{1, 0, 0, 0, 0, 0},
              {1, 0, 1, 1, 1, 1},
              {0, 0, 0, 0, 0, 0},
              {1, 1, 1, 0, 1, 1},
              {1, 1, 1, 0, 1, 1},
              {0, 0, 0, 0, 1, 1},
             };
Output: Number of islands is 4

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, matrix containing only 1 and 0 row wise

Output Format

A number representing the no. of islands
*/

#include <stdio.h>

void dfs(int i, int j, int m, int n,int arr[m][n])
{
    if (i<0 || j<0 || i>m-1 || j>n-1 || arr[i][j]==0)
    {
        return;
    }
    arr[i][j] = 0;
    dfs(i-1,j,m,n,arr);
    dfs(i+1,j,m,n,arr);
    dfs(i,j+1,m,n,arr);
    dfs(i,j-1,m,n,arr);
}

void main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j])
            {
                count++;
                dfs(i,j,m,n,arr);
            }
        }
    }   
    printf("%d",count);
}

/*
Testcase 1
Input
6 3
0 0 0
1 1 0
1 1 0
0 0 1
0 0 1
1 1 0

Output
3
*/
