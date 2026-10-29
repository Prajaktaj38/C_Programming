//// Assignment 3_4: Accept a charactor from user and print convert case of that factor.
//      Input:  a
//      Output: A
//
////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description: Accept a charactor from user and print convert case of that factor.
//  input: charactor
//  output: void
//  Author: Prajakta Jadhav
//  Date: 27/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("Convert case of charactor is : %c\n", cValue);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("Convert case of charactor is : %c\n", cValue);
    }
    else
    {
        printf("Invalid charactor\n");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter charactor : \n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0 ;
}

