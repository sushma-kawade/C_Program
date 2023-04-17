//write a program which accept number from user and written summation of its  all Non factor ......
/*  Input-   12
    output-  50 
    
    Input-10
    output- 37     */
    
#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n",iRet);
    return 0;
}

