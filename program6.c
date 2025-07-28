// template for SINGLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    PNODE next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// CALL BY ADDRESS MECHANISM
void InsertFirst(PPNODE Head, int iNo)
{

}

void InsertLast(PPNODE)
{

}

void InsertAtLoc(PPNODE, int iNo, int iLoc)
{

}

void DeleteFirst(PPNODE)
{

}

void DeleteLast(PPNODE)
{

}

void DeletAtLoc(PPNODE, int iLoc)
{

}

// CALL BY VALUE MECHANISM
void Display(PNODE Head)
{
    
}

void Count(PNODE Head)
{

}



int main()
{
    PNODE First = NULL;
    return 0;
}