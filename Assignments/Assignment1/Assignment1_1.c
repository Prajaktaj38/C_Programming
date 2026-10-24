//// Assignment 1.1: Write a program to Devide 2 numbers.
////////////////////////////////////////////////////////////////
//
//  Function Name: Devide
//  Description: Accept two numbers from user and perform division.
//  input: int
//  output: int
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

int Devide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Devide(iValue1, iValue2);

    printf("Devision is : %d", iRet);
    return 0;
}