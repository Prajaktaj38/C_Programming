//// Assignment 1.2: Print 5 times "Marvellous on screen".
////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description: Print Marvellous 5 times.
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
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Marvellous\n");
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