/*
Height and Leaf Count of a BST

Compute the height and the number of leaves in a Binary Search Tree. Height of an empty tree is -1.

Eg: Following values are inserted into an initially empty BST in the given order:
100, 50, 250, 200
Height of the above tree is 2
No. of leaf nodes is 2

Input - Output Format:
Eg:
1 --> insert
100 --> element
1 --> insert
50 --> element
1 --> insert
250 --> element
1 --> insert
200 --> element
2  --> inorder traversal
3 -->height
4 -->leaf count
5 --> stop
Output:
After 2 is entered
50 100 200 250 
After 3 is entered
2
After 4 is entered
2

Input Format

Enter the integers for different operations as follows:
1: insert 2: in order traversal 3: compute height 4: Leaf Count 5: exit
For inserting an element: insert element and press enter key

Output Format

Inorder traversal of elements is separated by space
After all elements are displayed in inorder, cursor moves to next line
After Height is displayed, cursor moves to next line
After Leaf count is displayed, cursor moves to next line
If the tree is empty, leaf count option will print the message "Empty Tree" and cursor moves to next line
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *left;
    struct node *right;
}NODE;

typedef struct tree
{
    NODE *root;
}TREE;

void initTree(TREE *pt);
void insertNode(TREE *pt,int ele);
void inorderTraversal(TREE *pt);
int findHeight(TREE *pt);
int leafCount(TREE *pt);
void destroyTree(TREE *pt);

int main()
{
    TREE tobj;
    initTree(&tobj);
    int choice;
    int ele;
    int res;
    do
    {
    scanf("%d",&choice);
    switch(choice)

    {
    case 1: scanf("%d",&ele);

    insertNode(&tobj,ele);
    break;

    case 2: inorderTraversal(&tobj);

    printf("\n");

    break;

    case 3: res=findHeight(&tobj);
    printf("%d\n",res);
    break;

    case 4:res=leafCount(&tobj);
    if(res!=0)
    printf("%d\n",res);
    else
    printf("Empty Tree\n");
    break;

    }
    }while(choice<5);
    destroyTree(&tobj);
}

void initTree(TREE *pt)
{
    pt->root=NULL;
}

NODE* createNode(int ele)
{
    NODE *newNode=malloc(sizeof(NODE));
    newNode->info=ele;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void insertNode(TREE *pt,int ele)
{
    NODE *p=pt->root;
    NODE *q=NULL;

    NODE *newNode=createNode(ele);
    if(pt->root==NULL)
    pt->root=newNode;
    else
    {
    while(p!=NULL)
    {
    q=p;
    if(newNode->info < p->info)
    p=p->left;
    else
    p=p->right;

    }
    if(newNode->info < q->info)
    q->left=newNode;
    else
    q->right=newNode;

    }
}

void inorder(NODE *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d ",p->info);
        inorder(p->right);
    }
}

void inorderTraversal(TREE *pt)
{
    inorder(pt->root);
}

void destroyNode(NODE *p)
{
    if(p!=NULL)
    {
    destroyNode(p->left);
    destroyNode(p->right);
    free(p);
    }
}

void destroyTree(TREE *pt)
{
    if(pt->root!=NULL)
    destroyNode(pt->root);

    pt->root=NULL;
}


int my_inorder(NODE *p)
{
    if (p==NULL)
    {
        return -1;
    }
    else
    {
        int a,b;
        a = my_inorder(p->left);
        b = my_inorder(p->right);
        return (a>b?a:b)+1;
    }
}

int findHeight(TREE *pt)
{
    return my_inorder(pt->root);
}

int my_inorder_two(NODE *p, int n)
{
    
    if(p!=NULL)
    {
        if ((p->left == NULL) && (p->right == NULL))
        {
            // printf("%d\n",p->info);
            return ++n;
        }
        n = my_inorder_two(p->left,n);
        n = my_inorder_two(p->right,n);
    }
    return n;
}

int leafCount(TREE *pt)
{
    return my_inorder_two(pt->root,0);
}

/*
Testcase 1
Input
1
100
1
50
1
250
1
200
2
3
4
5

Output
50 100 200 250 
2
2
*/
