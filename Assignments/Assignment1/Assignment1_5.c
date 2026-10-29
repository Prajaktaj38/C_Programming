//// Assignment 1.5: Accept one number from user and print that number of * on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Accept
//  Description: Accept one number from user and check whether it is divisible by 5 or not
//  input: int
//  output: Bool
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the value\n");
    scanf("%d", &iValue);

    Accept(iValue); 
  
    return 0;
}
