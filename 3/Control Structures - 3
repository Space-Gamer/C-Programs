/*
Problem Statement: Write a program to validate a given date and find the next date

Input Format

The date is provided in the format of DD-MM-YYYY

Output Format

Print the next date in the same format
*/

#include <stdio.h>
int main()
{
    int d,m,y;
    int max;
    scanf("%d-%d-%d",&d,&m,&y);
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        max = 31;
    }
    else if (m==4 || m==6 || m==9 || m==11)
    {
        max = 30;
    }
    else if (m==2)
    {
        if ((y%4==0 && y%100!=0) || (y%400==0))
        {
            max = 29;
        }
        else
        {
            max = 28;
        }    
    }
    else
    {
        printf("Invaild month!");
        exit(0);
    }
    //printf("%d",max);
    if (d<max)
    {
        d++;
    }
    else if (d==max && m<12)
    {
        d=1;
        m++;
    }
    else if (d==max && m==12)
    {
        d=1;
        m=1;
        y++;
    }
    else
    {
        printf("Invalid date!");
        exit(0);
    }
    if (d<10 && m<10)
    {
        printf("0%d-0%d-%d",d,m,y);
    }
    else if (d<10)
    {
        printf("0%d-%d-%d",d,m,y);
    }
    else if (m<10)
    {
        printf("%d-0%d-%d",d,m,y);
    }
    else
    {
    printf("%d-%d-%d",d,m,y);
    }
    return 0;
}

/*
Test Case 1:
Input:
23-09-2022

Output:
24-09-2022
*/
