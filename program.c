#include<stdio.h>
#include<stdlib.h>

// structure declaration
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL) 
    {
        *Head = newn;
    } 
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL) 
    {
        *Head = newn;
    }
    else 
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) return;
    if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else 
    {
        *Head = (*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) return;
    if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else 
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void display(PNODE Head)
{
    printf("Linked List: ");
    while(Head != NULL)
    {
        printf("| %d |->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void insertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;
    int size = count(*Head);

    if(iLoc < 1 || iLoc > size + 1)
    {
        printf("Invalid location!\n");
        return;
    }

    if(iLoc == 1)
    {
        InsertFirst(Head, iNo);
    }
    else if(iLoc == size + 1)
    {
        InsertLast(Head, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;

        for(int i = 1; i < iLoc - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void deleteAtLoc(PPNODE Head, int iLoc)
{
    PNODE Temp = *Head;
    PNODE targetNode = NULL;
    int size = count(*Head);

    if(iLoc < 1 || iLoc > size)
    {
        printf("Invalid location!\n");
        return;
    }

    if(iLoc == 1)
    {
        DeleteFirst(Head);
    }
    else if(iLoc == size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(int i = 1; i < iLoc - 1; i++)
        {
            Temp = Temp->next;
        }
        targetNode = Temp->next;
        Temp->next = targetNode->next;
        free(targetNode);
    }
}

int main()
{
    PNODE First = NULL;
    int choice, value, loc, iRet;

    while(1)
    {
        printf("\n========= MENU =========\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Insert at Specific Location\n");
        printf("4. Delete First\n");
        printf("5. Delete Last\n");
        printf("6. Delete at Specific Location\n");
        printf("7. Display\n");
        printf("8. Count Nodes\n");
        printf("0. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                InsertFirst(&First, value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                InsertLast(&First, value);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                printf("Enter location: ");
                scanf("%d", &loc);
                insertAtLoc(&First, value, loc);
                break;

            case 4:
                DeleteFirst(&First);
                break;

            case 5:
                DeleteLast(&First);
                break;

            case 6:
                printf("Enter location: ");
                scanf("%d", &loc);
                deleteAtLoc(&First, loc);
                break;

            case 7:
                display(First);
                break;

            case 8:
                iRet = count(First);
                printf("Total nodes: %d\n", iRet);
                break;

            case 0:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}