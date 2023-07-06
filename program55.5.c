/*write a recursive progream which accept numebr from user and return its product of digits.
Input:  5
Output: 120............*/
#include<stdio.h>

int MultR(int iNo)
{
    static int iSum = 1;
    static int iDigit = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum * iDigit;
        iNo = iNo / 10;
        MultR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int Ret = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Ret = MultR(iValue);
    printf("%d\n",Ret);
    return 0;
}