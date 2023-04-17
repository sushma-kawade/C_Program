/*write a program which accept range from user and display all number all number in between that range
Input   :   23     35
output  :   35  34  33  32  31  30  29  28  27  26  25  24  23 
Input   :   10  18
output  :   18   17    16   15    14    13      12     11      10 ... */

#include<stdio.h>
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}