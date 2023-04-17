/*write a program to find the factorial of given number.....
Input  : 5
output : 120   (5*4*3*2*1)
Input  : -5
output : 120    (5*4*3*2*1)
Input  : 4
output : 24......(4*3*2*1)*/
#include<stdio.h>
int factorial(int iNo)
{
    int iCnt = 0,iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;

    }
    return  iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);
    printf("Factoral of %d is %d\n",iValue,iRet);
    return 0;
}