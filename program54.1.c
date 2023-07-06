/* Write a recursive program which display below pattern
Input:  5
Output: *   *   *   *   *   ..............*/
#include<stdio.h>
void DisplayR(int iNo)
{
    static int iCnt = 0;
    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
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