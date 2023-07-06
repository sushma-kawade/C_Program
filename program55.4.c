/*write a recursive progream which accept numebr from user and return its Factorials.
Input:  5
Output: 120............*/
#include<stdio.h>

int FactR(int iNo)
{
    static int Sum = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        Sum = Sum * iCnt;
        iCnt++;
        FactR(iNo);
    }
    return Sum;
}

int main()
{
    int iValue = 0;
    int Ret = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Ret = FactR(iValue);
    printf("Factorial is : %d\n",Ret);
    return 0;
}