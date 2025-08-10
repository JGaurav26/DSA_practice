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
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head){}
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
    return 0;
}