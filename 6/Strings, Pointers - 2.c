/*
Problem Statement: Write a function to reverse a given string

Input Format

S: Input String

Output Format

S': Reversed String
*/

#include <stdio.h>
#include <string.h>

void rev(char *a)
{
    int i=0;
    for (i;i<(strlen(a)/2);i++)
    {
        char p;
        p=a[i];
        a[i]=a[strlen(a)-i-1];
        a[strlen(a)-i-1]=p;
    }
    printf("%s",a);
}

int main()
{
    char a[100];
    fgets(a,100,stdin);
    rev(a);
}

/*
Test Case 1:
Input:
hi

Output:
ih
*/
