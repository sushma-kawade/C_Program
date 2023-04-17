#include<stdio.h>
typedef int BOOL;

#define TRUE 1

#define FALSE 0

BOOL ChkGreter()
{

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("please enter number");
    scanf("%d",&iValue);
    bRet = ChkGreter(iValue);
    if()
    {
        printf("Greater");

    } 
    else
    {
        printf("Smaller");

    }
    return 0;
}