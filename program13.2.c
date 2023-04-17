/*write a program which accept number from user and count of odd digit....
Input   :   2395
output  :   3

Input   :   1018
output  :   2 

Input   :  -1018
output  :  2
Input   :   8462
output  :   0          ... */

#include<stdio.h>
int CountOdd(int iNo)
{
    int iOddCnt = 0,iDigit = 0;
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    return iOddCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("The Odd digit is %d",iRet);

    return 0;
}