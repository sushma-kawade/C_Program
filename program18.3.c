//accept number from user and display the below pattern...
/*  5
    1  * 2 * 3 *  4  *  5*/
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
`
    for(iCnt = 1; iCnt <=iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("enter number from elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}