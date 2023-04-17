/*write a program which accept range from user and display all even number in between that range
Input   :   23     35
output  :   24   26  28  30   32   34   
Input   :   10  18
output  :   10    12    14    16   18 
Input   :  -10   2 
output  :   -10   -8    -6    -4    -2    0   2     ....*/

#include<stdio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }

    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter startting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}