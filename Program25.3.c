/*write a program which accept string from user and return frequency of diffrance in small character and capital charatecter
Input   MarvellouS 
Output  6....*/

#include<stdio.h>
int CountDiff(char *str)
{
    int iCnt1 = 0, iCnt2 = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt1++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt2++;
        }
        str++;
    }
    return (iCnt1-iCnt2);
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountDiff(arr);

    printf("%d\n",iRet);

    return 0;
}