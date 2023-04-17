/*write a program which accept from user and Display below pattern....
    Input  :    5
    output :    *   *   *   *   *   #   #   #   #   #   
    Input  :    6
    output :    *   *   *   *   *   *   
    Input  :    -5
    output :    *   *   *   *   *   #   #   #   #   #   ......*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    } 
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}