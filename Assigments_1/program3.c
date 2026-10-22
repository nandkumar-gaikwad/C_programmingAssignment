////////////////////////////////////////////////////////////////////////////
//Function Name : Display
//Description it is used perform Display loop
//Input 5
//Output 5 4 3 2 1
//Author Nandkumar Gaikwad
//Date  22/10/2026
///////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(1<=i)
    {
        printf("%d\t",i);
        i--;
    }
}
int main()
{
    Display();
    return 0;
}