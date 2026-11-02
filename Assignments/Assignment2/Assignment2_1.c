//// Assignment 2_1: Accept one number from user and print that number of * on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Display Without Updator
//  Description: Accept one number from user and print that number of * on screen.
//  input: int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0; 

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
