/*
Find the row with maximum number of 1s

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Eg: Input matrix : 
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0
Output: 
2 

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, row wise sorted elements in matrix separated by a space

Output Format

Index of the row containing max no. of 1s
*/

#include <stdio.h>

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
    int row=0,count=0,max=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j])
            {
                count++;
            }
        }
        if (count>max)
        {
            row = i;
            max = count;
        }
        count = 0;
    }
    printf("%d",row);
}

/*
Testcase 1
Input
4 4
0 1 1 1
0 0 1 1
1 1 1 1
0 0 0 0

Output
2
*/
