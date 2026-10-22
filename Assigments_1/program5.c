////////////////////////////////////////////////////////////////////////////
//Function Name : Check
//Description it is used perform loop print
//Input 5
//Output   *****
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////




#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}






int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;

}