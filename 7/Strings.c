/*
Problem Statement: Write a function to remove all repeated characters from a given string and display the string without duplicate characters.

Input Format

s- input string

Output Format

s' - output string after removing duplicates
*/

#include <stdio.h>
#include <string.h>

void unique(char *a)
{
    char b[100];
    int i=0,j=0;
    for (i=0;i<strlen(a);i++)
    {
        int un = 1;
        for (j=0;j<strlen(b);j++)
        {
            if (a[i]==b[j])
            un = 0;
        }
        if (un==1)
        b[strlen(b)] = a[i];
    }
    printf("%s",b);
}

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    unique(str);
}

/*
Test Case 1:
Input:
Hello

Output:
Helo
*/
