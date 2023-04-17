#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float iPerc = 0.0;
    iPerc = (iNo2 * 100) / iNo1;
    return iPerc;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("please enter your total marks\n");
    scanf("%d",&iValue1);

    printf("please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("The percentage of: %f\n",fRet);

    
    return 0;
}

