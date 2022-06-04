/*
Problem statement: Define a structure called cricket that will describe the following information:

player name
team name
batting average

Using cricket, declare an array of players with 5 elements and write a program to read the information about all the 5 players, and print a team-wise list containing the names of players with their batting average. Write functions for the following:

i) Read the information of all the 5 players
ii)Sorting the players
iii)Displaying a team-wise list containing names of player with their batting average

Input Format

N-No of Players
PN-TN,BA - Player Name, Team Name, batting Average

Output Format

After Team-wise Sorting, the Player list is :
PN-TN'-BA
so on.... */


#include <stdio.h>
#include <string.h>

struct cricket
{
    char player_name[100];
    char team_name[100];
    int batting_average;
} s[5];

void team_comp(struct cricket s[5], int n)
{
    int i,j;
    struct cricket temp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if (strcmp(s[j].team_name,s[i].team_name)>0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void score_comp(struct cricket s[5], int n)
{
    int i,j;
    struct cricket temp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if ((s[j].batting_average<s[i].batting_average) && strcmp(s[j].team_name,s[i].team_name)==0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s %s %d",s[i].player_name,s[i].team_name,&s[i].batting_average);
    }
    team_comp(s,n);
    score_comp(s,n);
    for (i=0;i<n;i++)
    {
        printf("%s %s %d\n",s[i].player_name,s[i].team_name,s[i].batting_average);
    }
}



/* 
Test case 1:
Input: 
5
Sachin India 98
Rahul India 45
Jhonty Australia 89
Imran Pakistan 75
Shane Australia 29

Output:
Jhonty Australia 89
Shane Australia 29
Sachin India 98
Rahul India 45
Imran Pakistan 75


Test Case 2:
Input:
5
Sachin India 98
Rahul India 45
Jhonty Australia 89
Imran Pakistan 75
Shane Australia 29

Output:
Jhonty Australia 89
Shane Australia 29
Sachin India 98
Rahul India 45
Imran Pakistan 75


Test Case 3:
Input:
3
Virat India 59
Rassie Southafrica 69
Imam Pakistan 53

Output:
Virat India 59
Imam Pakistan 53
Rassie Southafrica 69
*/
