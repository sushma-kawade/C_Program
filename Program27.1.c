/*write a program which accept string from user and accept one character .Check whether that character is present in string or not..

Input   :   "Marvellous Multi OS"
            e
Output  :   True

Input   : "Marvellous Multi OS"
            w
Output  :   false....*/

#include<stdio.h>
#include<stdbool.h>

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);


    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;


}