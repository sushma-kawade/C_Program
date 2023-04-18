/*Accept character from user and check wheter it is capital or not(A-Z)

Input   F
Output  true

Input   &
Output  false......*/

#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch)
{ 
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("it is Capital character\n");
    }
    else
    {
        printf("It is not capital a character");
    }
    return 0;
}