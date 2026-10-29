//// Assignment 1.4: Write a program to accept one number and check whether it is divisible by 5 or not.
////////////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description: Accept one number from user and check whether it is divisible by 5 or not
//  input: int
//  output: Bool
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    Bool bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    return 0;
}