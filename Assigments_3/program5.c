////////////////////////////////////////////////////////////////////////////
//Function Name : Chkvowel
//Description it is used perform is vowel is their or not
//Input : a
//Output : it is vowel
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////

#include<stdio.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL Chkvowel(char cValue)
{
    

if(cValue == 'A' || cValue == 'a' ||
   cValue == 'E' || cValue == 'e' ||
   cValue == 'I' || cValue == 'i' ||
   cValue == 'O' || cValue == 'o' ||
   cValue == 'U' || cValue == 'u')
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
    char cValue = '\0';
    BOOL iRet = '\0';
    printf("Enter a charcter:\n");
    scanf("%c",&cValue);
    iRet = Chkvowel(cValue);
    if(iRet == TRUE)
    {
        printf("It is vowel");
    }
    else 
    {
        printf("It is not vowel");

    }

    return 0;

}