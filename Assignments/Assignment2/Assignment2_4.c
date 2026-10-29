//// Assignment 2_4: Accept two numbers from user
//      and display first number in second number of times on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description: Accept two numbers from user and display the first number the second number of times.
//  input: int, int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void Display(int iNo, int iFrequency)
{
    int  no = 0;
    for(no = 1; no <= iFrequency; no++)
    {
        printf("%d  ", iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;
    printf("Enter first number\n");
    scanf("%d", &iValue);

    printf("Enter second number\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}