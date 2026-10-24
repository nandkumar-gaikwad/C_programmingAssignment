////////////////////////////////////////////////////////////////////////////
//Function Name : Display
//Description it is used perform Display where input less 10 print hello otherwise Demo
//Input 10
//Output Demo
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////


#include<stdio.h>


void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("hello");


    }
    else
    {
        printf("Demo");
    }



}



int main()
{
    int iValue = 0;

    printf("Enter aa number:");
    scanf("%d",&iValue);
    Display(iValue);

}