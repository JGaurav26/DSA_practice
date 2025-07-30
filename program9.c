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
     // STEP 1 :: allocate memory dynamically for the node
    struct node * newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));

    // STEP 2 :: initialize the node
    newn->data = iNo;
    newn->next = NULL; // only one node is present hence the next part of the node will contain null value

    // STEP 3 :: check whether LL is empty or not
    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    } else { // if LL has more than one element
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("LINKED LIST ELEMENTS :: \n");
    while(Head != NULL)
    {
        printf("| %d | \n", Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    Display(First);
    return 0;
}