/*write a program to find even factorial of given number
Input   :5
output  :8  ..(4 *2)
Inout   :-5
output  :8...(4 * 2)....*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iFact = 1,iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial number is %d",iRet);

    return 0;
}