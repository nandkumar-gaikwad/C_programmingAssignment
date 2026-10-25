////////////////////////////////////////////////////////////////////////////
//Function Name : Display
//Description it is used perform factor of number
//Input : user input 24
//Output : 1 2 3 4 5 6 7 12
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{   
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    if(((iNo % iCnt) == 0))
    {
        printf("%d",iCnt);
    }

}


int main()
{
    int iValue = 0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;



}