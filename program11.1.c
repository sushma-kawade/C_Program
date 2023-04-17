/*write a program which accept range from user and display all number all number in between that range
Input   :   23     35
output  :   23  24  25  26  27  28  29  30  31  32  33  34  35 
Input   :   10  18
output  :   10  11  12  15  14  15  16  17  18 ... */

#include<stdio.h>
void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter startting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}