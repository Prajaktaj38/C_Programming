//// Assignment 3_3: Accept a number from user and print even factors of that number.
//      Input:  36
//      Output: 2  6  12   18
////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayFactor
//  Description: Accept one number from user and  print the even factors of that number.
//  input: int, int
//  output: void
//  Author: Prajakta Jadhav
//  Date: 20/10/2026
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i < iNo; i++)
    {
        if(( (iNo % i) == 0 ) && (i % 2) == 0)
        {           
            printf("%d\t", i);       
        }          
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}