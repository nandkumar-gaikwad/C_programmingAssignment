////////////////////////////////////////////////////////////////////////////
//Function Name : Display
//Description it is used perform Reverse * printing
//Input : user input 5
//Output :*****
//Author Nandkumar Gaikwad 
//Date  22/10/2026
///////////////////////////////////////////////////////////




#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo>=iCnt){
        printf("*");
        iNo--;
    }
}



int main()
{
    int iValue = 0;
    printf("Enter a number:");

    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}