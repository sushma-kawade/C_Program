/*write a program which accept number from user and count of digit in between 3 & 7....
Input   :   2395
output  :   1

Input   :   1018
output  :   0

Input   :  4521
output  :  2

Input   :   9922
output  :   0           ... */

#include<stdio.h>
int CountRange(int iNo,int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo1 % 10;
        iDigit = iNo2 >= iNo1;
        iNo1 = iNo1 / 10;
    }
    return iDigit;
}

int main()
{
    int iValue1 = 3,iValue2 = 7;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    iRet = CountRange(iValue1,iValue2);

    printf("The Diffrance between 3 & 7 digit is %d",iRet);

    return 0;
}