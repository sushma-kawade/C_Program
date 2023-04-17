/*write a program which accept range from user and display all even number in between that range
Input   :   23     35
output  :   108
Input   :   10  18
output  :   70 ... */

#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}