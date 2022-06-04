/*
Problem Statement: Write a function to find all occurrences of a character in a string and use this function to replace all occurrences of a character by a specific character.

Input Format

S = Input String
C= Character to replace
C'= Character replaced with C

Output Format

R: Resultant after replacing
*/

#include <stdio.h>
#include <string.h>

void rep(char *a, char *c, char *d)
{
    int i=0;
    for (i;i<strlen(a);i++)
    {
        if (a[i]==*c)
            a[i]=*d;
    }
}

int main()
{
    char a[100],b[100],d[100];
    fgets(a,100,stdin);
    scanf("%s",b);
    scanf("%s",d);
    rep(a,b,d);
    printf("%s",a);
}

/*
Test Case (self):
Input:
Hello World
l
p

Output:
Heppo Worpd
*/
