////////////////////////////////////////////////////////////////////////////
//Function Name : DisplayEven factor
//Description it is used perform DisplayEvenfactor
//Input : 36
//Output : 2 6 12 18
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////



#include<stdio.h>

void DisplayEvenFactor(int iNo)
{   
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    if(((iNo % iCnt) == 0)&&(iCnt % 2 == 0))
    {
        printf("%d",iCnt);
    }

}


int main()
{
    int iValue = 0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;



}