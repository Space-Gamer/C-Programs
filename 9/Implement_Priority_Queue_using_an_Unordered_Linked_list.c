/*
Write functions for the following
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

    if (head == NULL)
    {
        link->next = NULL;
        head = link;
        return;
    }

    current = head;
    while (current != NULL)
    {
        if (current->priority <= p)
        {
            if (prev == NULL)
            {
                link->next = head;
                head = link;
            }
            else
            {
                prev->next = link;
                link->next = current;
            }
            prev = NULL;
            current = NULL;
            return;
        }
        prev = current;
        current = current->next;
        if (current == NULL)
        {
            prev->next = link;
            link->next = NULL;
            prev = NULL;
            return;
        }
    }
}

void delete(int a, int b)
{
    if (head == NULL)
    {
        printf("No Elements\n");
    }
    else
    {
        prev = head;
        head = head->next;
        printf("%d %d\n",prev->data,prev->priority);
        free(prev);
        prev = NULL;
    }
    return;
}

void display()
{
    if (head == NULL)
    {
        printf("No Elements\n");
        exit(0);
        return;
    }
    current = head;
    while (current != NULL)
    {
        printf("%d %d\n",current->data,current->priority);
        current = current->next;
    }
    current = NULL;
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
                delete(a,b);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
        scanf("%d",&ch);
    } while(ch);
}

/*
Testcase 1
Input
1
10 1
1
20 2
1
30 3
1
40 0
3
2
2
2
2
3
4

Output
30 3
20 2
10 1
40 0
30 3
20 2
10 1
40 0
No Elements
*/
