/*Accept character from user and check wheter it is digit or not(0-9)

Input   7
Output  true

Input   d
Output  false......*/

#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char ch)
{ 
    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }  
    else
    {
        return false;
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("it is Digit\n");
    }
    else
    {
        printf("It is not a Digit character");
    }
    return 0;
}