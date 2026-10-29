//// Assignment 3_2: Accept a number from user and print even factors of that number.
//      Input:  24
//      Output: 2  4  6  8   12
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

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i * i <= iNo; i++)
    {
        if((iNo % i) == 0)
        {
             if( 1 != (iNo/i))
            {
                if( ((iNo/i) %2 == 0) && (i % 2) == 0)
                printf("%d\t", i);
                printf("%d\t", iNo/i);
            }     
        }          
    }            
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}