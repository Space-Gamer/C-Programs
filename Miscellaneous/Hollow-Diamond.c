/*
Program to print a hollow diamond.
*/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter value of n(integer only): ");
    scanf("%d",&r);
    r = (2*r) + 1; //2n+1 rows
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<r;j++)
        {
            if (i+j==((r-1)/2) || (i-j==((r-1)/2))  || (j-i==((r-1)/2)) || ((i+j==((3*r-3)/2) && i>((r-1)/2))))
            {
                printf("*");
            }
            else
            printf(" ");

        }
    printf("\n");
    }
}

/*
Input:
Enter value of n(integer only): 10

Output:
          *
         * *
        *   *
       *     *
      *       *
     *         *
    *           *
   *             *
  *               *
 *                 *
*                   *
 *                 *
  *               *
   *             *
    *           *
     *         *
      *       *
       *     *
        *   *
         * *
          *

*/
