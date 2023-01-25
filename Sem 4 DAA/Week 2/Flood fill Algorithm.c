/*
In MS-Paint, when we take the brush to a pixel and click, the color of the region of that pixel is replaced with a new selected color. Following is the problem statement to do this task. 

Given a 2D screen, location of a pixel in the screen and a color, replace color of the given pixel and all adjacent same colored pixels with the given color.
Input:
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1, 1, 0, 0},
               {1, 0, 0, 1, 1, 0, 1, 1},
               {1, 2, 2, 2, 2, 0, 1, 0},
               {1, 1, 1, 2, 2, 0, 1, 0},
               {1, 1, 1, 2, 2, 2, 2, 0},
               {1, 1, 1, 1, 1, 2, 1, 1},
               {1, 1, 1, 1, 1, 2, 2, 1},
               };
    x = 4, y = 4, newColor = 3
The values in the given 2D screen indicate colors of the pixels.
x and y are coordinates of the brush, newColor is the color that should replace the previous color on screen[x][y] and all surrounding pixels with same color.
Output:
Screen should be changed to following.
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1, 1, 0, 0},
               {1, 0, 0, 1, 1, 0, 1, 1},
               {1, 3, 3, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 3, 3, 0},
               {1, 1, 1, 1, 1, 3, 1, 1},
               {1, 1, 1, 1, 1, 3, 3, 1},
               };

Input Format

First Line: m n, where m is the no. of rows and n is the no. of columns. m <= 10, n <=10.
Next m lines, row wise elements in matrix separated by a space
Last line x y c, where x is the x coordinate, y is the y coordinate and c is the new color.

Output Format

Matrix with the color replaced
*/

#include <stdio.h>

void dfs(int i, int j, int m, int n, int arr[m][n], int oldc, int newc)
{
    if (i<0 || j<0 || i>m-1 || j>n-1 || arr[i][j]!=oldc)
    {
        return;
    }
    arr[i][j] = newc;
    dfs(i-1,j,m,n,arr,oldc,newc);
    dfs(i+1,j,m,n,arr,oldc,newc);
    dfs(i,j+1,m,n,arr,oldc,newc);
    dfs(i,j-1,m,n,arr,oldc,newc);
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
    int x, y, oldcolor, newcolor;
    scanf("%d %d %d",&x,&y, &newcolor);
    oldcolor = arr[x][y];
    dfs(x,y,m,n,arr,oldcolor,newcolor);
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
8 8
1 1 1 1 1 1 1 1
1 1 1 1 1 1 0 0
1 0 0 1 1 0 1 1
1 2 2 2 2 0 1 0
1 1 1 2 2 0 1 0
1 1 1 2 2 2 2 0
1 1 1 1 1 2 1 1
1 1 1 1 1 2 2 1
4 4 3

Output
1 1 1 1 1 1 1 1 
1 1 1 1 1 1 0 0 
1 0 0 1 1 0 1 1 
1 3 3 3 3 0 1 0 
1 1 1 3 3 0 1 0 
1 1 1 3 3 3 3 0 
1 1 1 1 1 3 1 1 
1 1 1 1 1 3 3 1 
*/
