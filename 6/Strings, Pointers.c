/*
Problem Statement: Write a function to Concatenate two strings and use this to concatenate n (i.e, say 2) strings.
Note: DO NOT USE STRCAT() OR ANY INBUILT FUNCTIONS

Input Format

s1: 1st String
s2: 2nd String
N: No of times to append

Output Format

N': String after concatenation
*/

#include <stdio.h>
#include <string.h>

char concat(char *a, char *b, int n)
{
    while (n>0)
    {
        int i=0,len=strlen(a);
        for (i;(i<strlen(b));i++)
        {
            //printf("%c %d",b[i],(len+i));
            a[len+i] = b[i];
        }
        n--;
    }
    printf("%s",a);
}

int main()
{
    char a[100],b[100],con[100];
    int n;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&n);
    concat(a,b,n);
    return 0;
}

/*
Test Case 1:
Input:
pes
university
1

Output:
pesuniversity


Test Case 2:
Input:
Hello
World
2

Output:
HelloWorldWorld
*/
