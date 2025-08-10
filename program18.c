// DOUBLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL) {
        *Head = newn;
        return;
    } else {
        (*Head)->prev = newn;
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL) {
        *Head = newn;
        return;
    } else { // LL is not empty
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        newn->prev = temp;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL) {
        printf("Invalid...\n");
        return;
    } else {
        (*Head) = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL) {
        printf("Invalid...\n");
        return;
    } else {
        while(temp->next->next != NULL) 
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head)
{
    printf("The elemetns in the linked list are :: \n");
    printf("NULL <=> ");
    while(Head != NULL) {
        printf("| %d | <=> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int count (PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL) {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    int iSize = count(*Head);
    int i = 0;

    newn->data = iNo;

    if(iLoc<1 || iLoc>(iSize+1)) {
        printf("Invalid...\n");
        return;
    }

    if(iLoc == 1){
        InsertFirst(Head, iNo);
    } else if(iLoc == iSize+1) {
        InsertLast(Head, iNo);
    } else {
        for(i=1; i<iLoc-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}


int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    int iRet = count(First);
    display(First);
    printf("Total nodes in the Linked List are = %d \n", iRet);

    InsertLast(&First, 40);
    InsertLast(&First, 50);
    iRet = count(First);
    display(First);
    printf("Total nodes in the Linked List are = %d \n", iRet);

    DeleteFirst(&First);
    DeleteLast(&First);
    iRet = count(First);
    display(First);
    printf("Total nodes in the Linked List are = %d \n", iRet);

    InsertAtLoc(&First, 50, 4);
    InsertAtLoc(&First, 10, 1);
    InsertAtLoc(&First, 25, 3);
    iRet = count(First);
    display(First);
    printf("Total nodes in the Linked List are = %d \n", iRet);

    return 0;
}