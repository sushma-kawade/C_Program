//Accept amount in US doller and return its corresponding value in Indian currancy..consider 1$ as 70 rupees......
/*  Input  :   10 
    output :   70
    Input  :    3
    output :    270
    Input  :    1200
    output :    84000...*/
#include<stdio.h>
int DollarToINR(int iNo)
{
    int iAns  = 0;
    iAns = iNo * 70; 
    return iAns;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}