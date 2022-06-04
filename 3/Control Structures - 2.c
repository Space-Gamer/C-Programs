/*
Write a Program to convert all characters in a given line from lower case to upper
case.

Input Format

S
Where S is a string with lower and uppercase characters 

Output Format

S' 
Where S' is S with all characters converted to Uppercase
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    //int i;
    gets(a);
    //printf("%s",a);
    //printf("%c",a[0]);
    for (int i=0;i<strlen(a);i++)
    {
        a[i] = toupper(a[i]);
    }
    printf("%s",a);
    return 0;
}

/*
Test Case 1:
Input:
this is my house

Output:
THIS IS MY HOUSE
*/
