/*Write a program which accept string from user and accept one character .Return index of first occurance of that character
Input:  "Marvellous Multi OS
         M
output:   0     

Input  : "Marvellous Multi OS"
        w
output : -1 

Input  : Marvellous Multi OS
        e
output: 4...*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= ch)
        {
            return iCnt;
        }
        iCnt++;
    }
    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("character location are : %d\n",iRet);

    return 0;
}