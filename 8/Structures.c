/*
Problem Statement: Write a Program to add two distances in the inch-feet system using structures

Input Format

Enter Feet
Enter Inch

Enter Feet'
Enter Inch'

Output Format

Sum 
*/

#include <stdio.h>

struct len
{
    float f;
    float i;
};

void add(struct len n1,struct len n2)
{
    //float f,i;
    int f;
    float i;
    f = n1.f + n2.f;
    i = n1.i + n2.i;
    while (i>=12)
    {
        i-=12;
        f++;
    }
    printf("%d'-%0.1f''",f,i);
}

int main()
{
    float f,i;
    scanf("%f",&f);
    scanf("%f",&i);
    struct len n1={f,i};
    scanf("%f",&f);
    scanf("%f",&i);
    struct len n2={f,i};
    add(n1,n2);
}

/*
Test Case 1:
Input:
23
10
34
2.4

Output:
58'-0.4''
*/
