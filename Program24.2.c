/*Accept character from user.if character is small display its corresponding capital
and if cracetr is small the display its corrsponding capital,in otwr cases display as it is....
Input       Q
Output      q

Input       m
Output      M

Input       %
Output      %

Input       4
Output      4.....*/

#include<stdio.h>
char Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter your Character\n");
    scanf("%c",&cValue);

    cRet = Display(cValue);
    printf("Character is the :%c\n ",cRet);
    return 0;
}