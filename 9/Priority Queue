#include <stdio.h>
#include <string.h>
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
    current = head;
    while(current != NULL)
    {
        if (current->priority <= p) //Condition to check if the current node's priority is less than given data priority
        {
            if (prev==NULL) //If the element has to be inserted to the first place
            {
                link->next = head; //Previous first element's (now becoming second) address being linked to the new element (now becoming first)
                head = link;
            }
            else
            {
                prev->next = link; //Changing previous element "next" variable(address of next element) to the one being added.
                link->next = current; //Assigning the "next" variable of link(element being inserted) to the current node.
            }
            prev = NULL; //Resetting prev to NULL
            current = NULL; //Resetting current to NULL
            return;
        }
        prev = current;
        current = current->next;
        //Case when element has to be entered at last
        if (current == NULL)
        {
            prev->next = link; //Linking previous element(previuosly last) element to link(element being inserted)
            link->next = NULL;
            prev = NULL; //Resetting prev to NULL
            return;
        }
    }
}

void delete()
{
    if (head == NULL)
    {
        printf("No Elements\n");
    }
    else
    {
        prev = head; //Assigning first element to temperorary variable.
        head = head->next; //Changing head to previously second element.
        printf("deleted %d\n",prev->data); //Printing the element being deleted (Previously first element).
        free(prev); //Releasing the memory of deleted element.
        prev = NULL; //Resetting prev variable.
    }
    return;
}

void display()
{
    if (head==NULL) //If list is empty
    {
        printf("No Elements\n");
        exit(0);
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
