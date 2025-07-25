/* Problem statement: Accept the radius from user and calculate the area of circle */

#include<stdio.h>

float calculateArea(float iRad)
{
    auto float fAreaofCircle = 0.0f;
    auto float PI = 3.14;
    fAreaofCircle = PI * iRad * iRad;
    return fAreaofCircle;
}

int main()
{
    auto float radius = 0.0f;
    auto float fAns = 0.0f;

    printf("Enter the radius of Cirlce :: \n");
    scanf("%f", &radius);
    fAns = calculateArea(radius);

    printf("Area of the circle is :: %.2f \n", fAns);
}