/*write a program which accept number from user and count of even digit....
Input   :   2395
output  :   1

Input   :   1018
output  :   2 

Input   :  -1018
output  :  2
Input   :   8462
output  :   4           ... */

#include<stdio.h>
int CountEven(int iNo)
{
    int iEvenCnt = 0,iDigit = 0;
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The even digit is %d",iRet);

    return 0;
}