/*Accept character from user Display ASCII value in Decimal,Hexadeciamal and octal format.
Input   A
Output  Decimal 65
        octal       0101
        hexadecimal     0x41*/
#include<stdio.h>
void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf(" Decimal value is :%d\n",ch);

     printf("DecimalHex value is:%x\n",i);
    printf("Octal value is %o\n",i);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}