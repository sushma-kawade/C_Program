/*write a program which accept number from user and count frequwncy of 4 in it....
Input   :   2395
output  :   0

Input   :   1018
output  :   0 

Input   :  922432
output  :  1   

Input   :  9440
output  :  2... */

#include<stdio.h>
int CountFour(int iNo1,int iNo2)
{
    int iDigit = 0,iCnt = 0;
    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        if(iDigit == iNo2)
        iCnt++;
        iNo1 = iNo1 / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0,iValue2 = 4;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    iRet = CountFour(iValue1,iValue2);

    printf("fequency of four is %d",iRet);

    return 0;
}