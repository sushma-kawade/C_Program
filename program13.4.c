/*write a program which accept number from user and return Multiplication of all digits....
Input   :   2395
output  :   270

Input   :   1018
output  :   8

Input   :  9440
output  :  144

Input   :   922432
output  :   864           ... */

#include<stdio.h>
int MultDigits(int iNo)
{
    int iMult = 1;
    if(iNo == 0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        //iDigit = iNo % 10;
        iMult = iMult * (iNo % 10);
        iNo /= 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("The Multiplication of digit is %d",iRet);

    return 0;
}