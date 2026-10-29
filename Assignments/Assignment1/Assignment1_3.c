//// Assignment 1.3: Write a program to print 5 to 1 numbers on screen.
////////////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description: Accept one number from user and check whether it is divisible by 5 or not
//  input: int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }    
}

int main()
 {
    Display();
    return 0;
 } 