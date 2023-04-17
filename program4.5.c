//write a program which accept number from user and  return diffrance between summation of all its factor and non factor......
    
#include<stdio.h>
int summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0 && iNo % iCnt % 2 != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",& iValue);

    iRet = summation(iValue);
    printf("%d %d\n",iValue,iRet);
    return 0;
}

