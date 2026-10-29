//// Assignment 2_1: Accept one number from user and print that number of * on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description: Accept one number from user and print that number of * on screen.
//  input: int
//  output: Bool
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Write updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt ++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the value\n");
    scanf("%d", &iValue);

    Display(iValue); 
  
    return 0;
}
