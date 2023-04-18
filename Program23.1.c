/*Accept character from user and check wheter it is alphabet or not(A-Z a-z)

Input   F
Output  true

Input   &
Output  false......*/

#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch)
{ 
    if((ch >= 'a') && (ch <='z'))||((ch >= 'A') && (ch<='Z'))
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

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("it is character\n");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;
}