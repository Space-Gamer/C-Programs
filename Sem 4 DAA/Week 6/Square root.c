/*
Square root of a number

Given an integer X, find its square root. If X is not a perfect square, then return floor(√x).
Example: 
Input: 25 Output: 5
Input: 37 Output: 6 (square toot of 37 lies between 6 and 7, therefore 6)

Input Format

'N' indicating the integer to which square root needs to be computed

Output Format

Computed square root
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int mid,low=0,high=x;
    while (high >= low)
    {
        mid = (high+low)/2;
        if (mid*mid == x)
        {
            high = mid;
            break;
        }
        else if (mid*mid > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("%d",high);
}

/*
Testcase 1
Input
101

Output
10
*/
