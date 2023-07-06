/*Write a recursive program which accept number from user and display below pattern
Input:  5
Ouptput:    5   *   4   *   3   *   2   *   1   *............*/

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1,iSum = 0;
    //iCnt = iNo;
    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        printf("*\t");
        iCnt--;

        DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter thhe number\n");
    scanf("%d",&iValue);

    DisplayR(iValue);
}