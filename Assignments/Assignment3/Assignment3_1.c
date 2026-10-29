//// Assignment 3_1: Accept a number from user and print the number of even numbers on the screen
//      Input:  7
//      Output: 2  4  6  8  10  12  14
////////////////////////////////////////////////////////////////
//
//  Function Name: printEven
//  Description: Accept one number from user and  print the number of even numbers.
//  input: int, int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

void printEven(int iNo)
{
    int iCount = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t", iCount * 2);        
    }            
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}