////////////////////////////////////////////////////////////////////////////
//Function Name : PrintEven
//Description it is used perform factors of number
//Input : user input 7
//Output :  2 4 6 8  10 12 14
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////
#include<stdio.h>


void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <=0)
    {
        return ;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf(" %d ",iCnt *  2);
    }


}










int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;

}