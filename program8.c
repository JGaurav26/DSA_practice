#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(struct node ** Head, int iNo)
{
    // STEP 1 :: allocate memory dynamically for the node
    struct node * newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));

    // STEP 2 :: initialize the node
    newn->data = iNo;
    newn->next = NULL; // only one node is present hence the next part of the node will contain null value
}


int main()
{
    struct node * First = NULL;
    InsertFirst(&First, 10);

    return 0;
}