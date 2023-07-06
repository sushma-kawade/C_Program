/* Write a recursive program which display below pattern
Input:  5
Output: 5   4   3   2   1      ..............*/
#include<stdio.h>
void DisplayR(int iNo)
{
    static int iCnt = iNo;

    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        DisplayR(iNo); 
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;
}