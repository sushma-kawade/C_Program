/*write a program which accept range from user and return addition of all number in between that range(range contain positive numbers only)
Input   :   23     30
output  :   212 
Input   :   10  18
output  :   126  
Input   :   -10
Output  :   2   ... */

#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter startting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}