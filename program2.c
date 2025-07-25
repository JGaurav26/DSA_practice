//Problem statement: Accept two intgers and perform the addition

#include<stdio.h>

int iAddition(int iNo1, int iNo2)
{
    int iSum =0;    // variable to store Sum of no's
    iSum = iNo1+iNo2;
    return iSum;
}

int main()
{
    auto int iValue1 = 0;   // variable to store first no
    auto int iValue2 = 0;   // variable to store second no
    auto int iAns = 0;      // variable to store addition
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iAns=iAddition(iValue1,iValue2); //call to iAddition function
    printf("Addition is: %d",iAns);
    return 0;

}

// Test case 1:
// Inut 10 11
// Output 21
// Test pass/fail: pass

// Test case 2:
// Inut 0 11
// Output 11
// Test pass/fail: pass

// Test case 3:
// Inut 12 -6
// Output 6
// Test pass/fail: pass

// Test case 4:
// Inut -5 -6
// Output -11
// Test pass/fail: pass

// Test case 5:
// Inut -15 -6
// Output -21
// Test pass/fail: pass

// Test case 6:
// Inut -15 6
// Output -9
// Test pass/fail: pass

// Test case 7:
// Inut 10.25 10.25
// Output 10
// Test pass/fail: fail