//Accept number from user and check whater number is even odd.....
#include<stdio.h>
#define TRUE1
#define FALSE2
typedef int Bool;
Bool ChkEven(int iNo)
{
    if(iNo % iNo/2 == 0)
    {
        return true;

    }
    else
    {
        return FALSE;
    }


}
int main()
{
    int iValue = 0;
    bool iRet = FALSE;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;

}