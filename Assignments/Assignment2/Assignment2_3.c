//// Assignment 2_3: Accept one number from user 
//      and if number is less than 10 then print "Hello" otherwise print "Demo" on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description: Accept one number from user and check if it is less than 10.
//  input: int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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