/*write a program which retrun diffrance between Even Fctorial and odd factorial of given  number....
Input   :5
output  :-7 ..(8-15)
Inout   :-5
output  :-7 ..(8-15)....
Input   :10
output  :2895 ...(3840 - 945)...*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0,iFact = 1,iSum = 0;
    for(iCnt = 1; iCnt = iNo; iCnt++)
    {
        if((iCnt % 2 == 0) && iCnt % 2 != 0)
        {
        iFact = iFact * iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("diffrance factorial number is %d",iRet);

    return 0;
}