/*Write a program which accept string from user and accept one character .retrun frequency of that character
Input:  "Marvellous Multi OS"
        M
Output: 2

Input:  Marvellous Multi OS
        W
Output: 0*/

#include<stdio.h>

int CountFrequency(char *str)
{
    int iCnt = 0,reverse = 0;

    for(iCnt = str-1;iCnt >= 0;iCnt--)
    {
        reverse = reverse + iCnt;
    }
    return reverse;
    }


int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountFrequency(Arr);

    printf("Frequency of letter : %d\n",iRet);

    return 0;
}