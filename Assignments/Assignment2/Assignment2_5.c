//// Assignment 2_5: Accept a number from user and check whether it is even or odd.
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

#define TRUE 1
#define FALSE 0

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    iRet = CheckEvenOdd(iValue);

    if(iRet == TRUE)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
    
}