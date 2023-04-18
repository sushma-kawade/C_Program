//accepet number from user and display below patteran
/*  8
    2   4   6   8   10  12  14  16  ...*/    
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt =0,r = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo ; iCnt++)
    {
        printf("%d\t",2 * iCnt);
        
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