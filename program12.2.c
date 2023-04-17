/*write a program which accept number from user and check whether it contain 0 in it or not....
Input   :   2395
output  :   there is no Zero

Input   :   1018
output  :   it contain Zero

Input   :  9000
output  :   it contain zero */

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0,iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev= (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iDigit == iRev;

}

int main() 
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it contains zero\n");
    }
    else
    {
        printf("there is no zero\n");
    }

    return 0;
}