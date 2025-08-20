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

    newn->next = NULL;
    newn->data = iNo;

    if(*Head == NULL){
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else{
        newn->next = *Head;
        *Head = newn;
        (*Tail)->next = *Head;
    }
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = iNo;

    if(*Head == NULL){
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else{
        (*Tail)->next = newn;
        *Tail = newn;
        newn->next = *Head;
    }
}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    if(*Head == NULL && *Tail == NULL)
    {
        printf("Invalid...");
        return;
    } else if((*Head)->next == NULL){
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    } else{
        (*Head) = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    if(*Head == NULL && *Tail == NULL)
    {
        printf("Invalid...");
        return;
    } else{
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

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

int count (PNODE Head, PNODE Tail)
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
    display(First, Last);
    int iRet = count(First, Last);
    printf("Total nodes in the linked list are = %d \n", iRet);

    InsertLast(&First, &Last, 40);
    InsertLast(&First, &Last, 50);
    display(First, Last);
    iRet = count(First, Last);
    printf("Total nodes in the linked list are = %d \n", iRet);

    DeleteFirst(&First, &Last);
    display(First, Last);
    iRet = count(First, Last);
    printf("Total nodes in the linked list are = %d \n", iRet);

    DeleteLast(&First, &Last);
    display(First, Last);
    iRet = count(First, Last);
    printf("Total nodes in the linked list are = %d \n", iRet);
    return 0;
} 