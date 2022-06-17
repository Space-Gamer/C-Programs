/*
Problem Statement: Write functions for the following
1)Initialization
2)Enqueue
3)Dequeue
4)Display

Input Format

1. insert
2. delete
3. display
4. Exit

Output Format

Display Appropriately
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;

void insert(int d, int p)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = d;
    link->priority = p;
    
    if ((head==NULL))//If no element in list
    {               
        link->next = NULL;
        head = link;
        return;
    }
    //if not empty
    link->next = head;
    head = link;
}

void delete()
{
    if (head == NULL)
    {
        printf("No Elements\n");
    }
    else
    {
        current = head;
        int maxp=-1, maxd=-1;
        while (current != NULL)
        {
            if (current->priority >= maxp)
            {
                if ((current->priority == maxp) && (current->data < maxd))
                {
                    maxd = current->data;
                }
                else if (current->priority != maxp)
                {
                    maxd = current->data;
                }
                maxp = current->priority;
            }
            current = current->next;
        }
        current = head;
        while (current != NULL)
        {
            if (current->data == maxd && current->priority == maxp)
            {
                if (prev == NULL) //first element
                {
                    head = current->next;
                    printf("deleted %d\n",current->data);
                    free(current);
                }
                else
                {
                    prev->next = current->next;
                    printf("deleted %d\n",current->data);
                    free(current);
                }
                current = NULL; //Resetting prev
                prev = NULL; //Resetting prev
                return;
            }
            prev = current;
            current = current->next;
        }
    }
    return;
}

void display()
{
    if (head==NULL) //If list is empty
    {
        printf("No Elements\n");
        return;
    }
    current = head;
    while(current != NULL) //Loop to go on until the next element is NULL
    {
        printf("%d %d\n",current->data,current->priority);
        current = current->next;
    }
    current = NULL; //Resetting current to NULL
    return;
}


int main()
{
    int ch,a,b;
    scanf("%d",&ch);
    do
    {
        switch (ch)
        {
            case 1:
                scanf("%d %d",&a,&b);
                insert(a,b);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
        scanf("%d",&ch);
    }
    while(ch);
}

/*
Test Case 1:
Input:
1
10 1
1
200 2
1
30 3
1
40 0
3
2
2
3
2
2
3
4

Output:
40 0
30 3
200 2
10 1
deleted 30
deleted 200
40 0
10 1
deleted 10
deleted 40
No Elements

Test Case 2:
Input:
1
10 1
1
200 1
1
30 3
3
2
3
2
2
3
4

Output:
30 3
200 1
10 1
deleted 30
200 1
10 1
deleted 10
deleted 200
No Elements


Test Case 3:
Input:
3
4

Output:
No Elements


Test Case 4:
Input:
1
100 1
1
200 5
1
300 3
3
4

Output:
300 3
200 5
100 1
*/
