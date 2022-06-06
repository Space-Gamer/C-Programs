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
    if (head == NULL) //Condition to check if the list is empty
    {
        printf("No Elements\n");
    }
    else if (head->next == NULL) //Condition to check if the list has only 1 element and delete it
    {
        printf("deleted %d\n",head->data);
        free(head);
        head = NULL; //list made empty
    }
    else
    {
        current = head;
        while (current->next != NULL) //To iterate till the highest prority element
        {
            prev = current;
            current = current->next;
        }
        prev->next = NULL; //Making the last second element as the current last.
        printf("deleted %d\n",current->data);
        free(current); //Free the memory of deleted element
        current = NULL; //Resetting current
        prev = NULL; //Resetting prev
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
