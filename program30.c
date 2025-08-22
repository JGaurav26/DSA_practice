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
        newn->next = *Head;       
        newn->prev = *Tail;       
        (*Head)->prev = newn;     
        (*Tail)->next = newn;    
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

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while(Head != Tail->next);
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    
    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);
    Display(First, Last);
    int iRet = Count(First, Last);
    printf("Total number of elements in the Linked List are :: %d \n", iRet);

    return 0;
}