/*
Problem statement:accept the number from user and display whether its even number or not. */

#include<stdio.h>
#include<stdbool.h>

bool ckhEven(int iNo)
{
    if(iNo % 2 == 0)
    return true;
    else
    return false;
}


int main()
{
    int iVal = 0;
    bool bRes = false;

    printf("Enter the number :: \n");
    scanf("%d", &iVal);

    bRes = ckhEven(iVal);
    if(bRes == true)
    printf("Given number is EVEN \n");
    else
    printf("Given number is ODD \n");

    return 0;
}