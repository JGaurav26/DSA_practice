// CIRCULAR DOUBLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
    struct node *prev;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL && *Tail == NULL){
        *Head = newn;
        (*Tail) = newn;
        (*Head)->next = *Head;
        (*Head)->prev = *Tail;
    } else{
        newn->next = *Head;       // new node → old head
        newn->prev = *Tail;       // new node → old tail
        (*Head)->prev = newn;     // old head ← new node
        (*Tail)->next = newn;     // old tail → new node
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head, PPNODE Tail){}

void DeleteLast(PPNODE Head, PPNODE Tail){}

void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc){}

void Display(PNODE Head, PNODE Tail)
{
    printf("The elements in the Linked List are :: \n");
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            printf("| %d | <=> ", Head->data);
            Head = Head->next;
        } while(Head != Tail->next);
        {
            printf("First NODE Address \n");
        }
    }
}

int Count(PNODE Head, PNODE Tail){return 0;}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    
    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);
    Display(First, Last);

    return 0;
}