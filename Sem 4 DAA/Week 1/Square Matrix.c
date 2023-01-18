/*
To check if a given square matrix is identity matrix.

An Identity Matrix is a square matrix in which all the elements of the principal or main diagonal are 1’s and all other elements are 0’s.

Input Format

First Line: No. of rows in the matrix 1<= n <=5
Next n lines: Matrix elements row wise separated by space

Output Format

Print Yes if the matrix is identity matrix else print No.
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
    int flag=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j && arr[i][j]!=1)
            {
                flag=1;
            }
            else if (i!=j && arr[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if (flag==1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}

/*
Testcase 1
Input
3
1 0 0
0 1 0
0 0 1

Output
Yes
*/
