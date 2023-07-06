/*write a recursive progream which accept numebr from user and return its Reverse number.
Input:  523
Output: 325............*/
#include<stdio.h>

int ReverseR(int iNo)
{
    static int iRev = 0;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        ReverseR(iNo);
    }
    return iRev;

}

int main()
{
    int iValue = 0;
    int Ret = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Ret = ReverseR(iValue);
    printf("Reverse number is : %d\n",Ret);
    return 0;
}