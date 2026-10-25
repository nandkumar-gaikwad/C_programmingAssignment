////////////////////////////////////////////////////////////////////////////
//Function Name : DisplayConvert
//Description it is used perform Display uppercase to lower each opposite
//Input : user input A
//Output : a
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{ 
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n",cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n",cValue - 32);

    }



    

}


int main()
{
    char cValue = '\0';
    printf("Enter charcter :\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;



}