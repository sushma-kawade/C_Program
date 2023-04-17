/*write a program which accept number from user and count frequwncy of such a digit which are less than 6.......
Input   :   2395
output  :   2

Input   :   1018
output  :   0 

Input   :  922432
output  :  3     ... */

#include<stdio.h>
int CountTwo(int iNo1,int iNo2)
{
    int iDigit = 0,iCnt = 0;
    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        if(iDigit < iNo2)
        {
        iCnt++;
        }
        iNo1 = iNo1 / 10;
        
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0,iValue2 = 6;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    iRet = CountTwo(iValue1,iValue2);

    printf("fequency of two is %d",iRet);

    return 0;
}