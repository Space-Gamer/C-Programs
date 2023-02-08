/*
Find lucky numbers in matrix

Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix. A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
Eg:
50 30 60
80 20 70
40 10 90
Output: 30 (It is the minimum in the row and maximum in the column.

Input Format

First line: m n, 'm' indicating the no. of rows, separated by a space with 'n' indicating the no. of columns 1 <= m, n <= 50
Next m lines: n numbers in each line separated by space

Output Format

All the lucky numbers in different lines
*/

#include <stdio.h>

int main()
{
    int m,n,min,max;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<m;i++)
    {
        min = 0;
        for (int j=1;j<n;j++)
        {
            if (arr[i][j]<arr[i][min])
            {
                min = j;
            }
        }
        max = i;
        for (int k=0;k<m;k++)
        {
            if (arr[k][min] > arr[i][min])
            {
                max = k;
                break;
            }
        }
        if (max==i)
        {
            printf("%d\n",arr[max][min]);
        }
    }
}

/*
Testcase 1
Input
3 3
50 30 60
80 20 70
40 10 90

Output
30
*/
