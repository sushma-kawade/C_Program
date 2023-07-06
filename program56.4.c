/*write a recursive program which accept number from user and return summation of its digits
Input:  879
Output: 24.......*/

#include<stdio.h>

int MinR(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        MinR(iNo);
    }
    return iMin;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MinR(iValue);

    printf("%d",iRet);

    return 0;

}