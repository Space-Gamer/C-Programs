/*
Program to sort an array according to selection sort algorithm
*/

#include <stdio.h>

void lstp(int n, int *l)
{
    int i=0;
    for (i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    int i=0,j=0;
    for (i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Entered array is: ");
    lstp(n,ar);
    for (i=0;i<n;i++)
    {
        int s = i;
        for (j=i+1;j<n;j++)
        {
            
            if (ar[j]<ar[s])
            {
                s=j;
            }
        }
        int t=ar[s];
        ar[s]=ar[i];
        ar[i]=t;
        // lstp(n,ar); // Uncomment to get the sorting mechanism after every n iterations
    }
    printf("Sorted list is: ");
    lstp(n,ar);
}

/*
Input:
Enter the size of array: 5
Element 1: 63
Element 2: -9
Element 3: 23
Element 4: 5
Element 5: 10

Output:
Entered array is: 63 -9 23 5 10 
Sorted list is: -9 5 10 23 63
*/

/*
Mechanism:
63 -9 23 5 10
-9 63 23 5 10 
-9 5 23 63 10 
-9 5 10 63 23 
-9 5 10 23 63 
-9 5 10 23 63
*/
