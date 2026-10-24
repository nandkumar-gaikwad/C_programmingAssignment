////////////////////////////////////////////////////////////////////////////
//Function Name : Display
//Description it is use perform number frequency
//Input 15 ,3
//Output 15 15 15
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////







#include<stdio.h>

void Display(int iNo,int Frequency)
{
    int i = 0;
    for(i=1;i<=Frequency;i++)
    {
        printf("%d",iNo);
    }
}


int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    printf("Enter a frequecy:");
    scanf("%d",&iCount);

    Display(iValue,iCount);



}