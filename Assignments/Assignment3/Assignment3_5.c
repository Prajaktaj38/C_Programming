//// Assignment 3_5: Accept a charactor from user and check whetherthat character is vowel(a, e, i, o, u) or not.
//      Input:  a
//      Output: True
//      Input:  d
//      Output: False
//      input: E
//      output: True
////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkVowel
//  Description    : Accept a charactor from user and print convert case of that factor.
//  input          : int, int
//  output         : boolean
//  Author         : Prajakta Jadha
//  Date           : 27/10/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int boolean;
#define True 1
#define False 0

boolean ChkVowel(char cValue)
{
    switch (cValue)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        return True;
        default:
        return False;
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter charactor : \n");
    scanf("%c", &cValue);
    if(ChkVowel(cValue) == True)
    {
        printf("%c is a vowel \n", cValue);
    }
    else
    {
        printf("%c is not a vowel \n", cValue);
    }
    return 0 ;
}