/*write a program to find odd factorial of given number
Input   : 5
output  : 15  ..(4 *2)
Inout   :-5
output  : 15 ...(4 * 2)....
Input   : 10
output  : 945 ....*/
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iFact = 1,iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        iFact = iFact * iCnt;
    }

    return iFact;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial number is %d",iRet);

    return 0;
}