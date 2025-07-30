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

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL; // only one node is present hence the next part of the node will contain null value


}


int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 10);

    return 0;
}