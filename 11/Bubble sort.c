#include <stdio.h>

void ptlst(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        // printf("%d\t",arr[i]);
        printf("%d\n",arr[i]);
    }
    // printf("\n");
}

void bubsort(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<(n-i);j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // ptlst(arr,n); // Uncomment this line for the bubble sort steps
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // ptlst(arr,n);
    bubsort(arr,n);
    ptlst(arr,n);
    return 0;
}
