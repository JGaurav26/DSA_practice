// CIRCULAR SINGLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL) {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else {
        *Head = newn;
        newn->next = *Tail;
        (*Tail)->next = *Head;
    }
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}
void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head, PPNODE Tail){}
void DeleteLast(PPNODE Head, PPNODE Tail){}
void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc){}

void display(PNODE Head, PNODE Tail)
{
    printf("The elements in the Linked List are :: \n");
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            printf("| %d | -> ", Head->data);
            Head = Head->next;
        } while(Head != Tail->next);
        {
            printf("First NODE Address \n");
        }
    }
}

int count (PNODE Head, PNODE Tail){return 0;}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);
    display(First, Last);
    return 0;
}