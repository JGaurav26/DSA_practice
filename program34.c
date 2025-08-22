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

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
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
        newn->prev = *Tail;
        newn->next = *Head;
        (*Tail)->next = newn;
        (*Head)->prev = newn;
        *Tail = newn;
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if(*Head == *Tail){
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    } else{
        *Head = (*Head)->next;
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Tail;
    if(*Head == *Tail){
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    } else{
        *Tail = (*Tail)->prev;
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
        free(temp);
    }
}

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

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    int iSize = Count(*Head, *Tail);

    if(iLoc<1 || iLoc>(iSize+1)){
        printf("Invalid......\n");
        return;
    }

    if(iLoc == 1){
        InsertFirst(Head, Tail, iNo);
        return;
    } else if(iLoc == (iSize+1)){
        InsertLast(Head, Tail, iNo);
        return;
    } else{
        for(int i = 0; i<(iLoc-1); i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;
    }
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

    InsertLast(&First, &Last, 40);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Total number of elements in the Linked List are :: %d \n", iRet);

    InsertAtLoc(&First, &Last, 25, 2);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Total number of elements in the Linked List are :: %d \n", iRet);

    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Total number of elements in the Linked List are :: %d \n", iRet);

    DeleteLast(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Total number of elements in the Linked List are :: %d \n", iRet);

    return 0;
}