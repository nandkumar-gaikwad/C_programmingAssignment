////////////////////////////////////////////////////////////////////////////
//Function Name : ChkEven
//Description it is used perform Check no is even or not
//Input 8
//Output it is even
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////












#include<stdio.h>

typedef int BOOL;
#define TRUE  1
#define FALSE  0

BOOL ChkEven(int iNo)
{
    if(iNo % 2== 0)
    {
        return TRUE;

    }
    else 
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);
    

    if(bRet == TRUE)
    {
        printf("it is even Number");
    }
    else 
    {
        printf("It is odd Number");
    }

    return 0;
}