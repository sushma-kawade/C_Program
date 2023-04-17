/*write a program which accept number from user and return diffrancr between summation of  even digit and summation of odd digits....
Input   :   2395
output  :   -15         (2-17)

Input   :   1018
output  :   6           (8-2)

Input   :  -1018
output  :  16           (16-0)

Input   :   8462
output  :   -18         (0-18)           ... */

#include<stdio.h>
int CountDiff(int iNo)
{
    int iEvenCnt = 0,iDigit = 0,iOddCnt = 0,iAns = 0,iSum1 = 0,iSum2 = 0;
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
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iOddCnt++;
            iSum2 = iSum2 + iDigit;

        }
        iNo = iNo / 10;
    }
    
        iAns = iSum1 - iSum2;

        
    
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The diffrance between odd and even digit is %d",iRet);

    return 0;
}