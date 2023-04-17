//write a program which accept three number from users and print its multiplication.......
/*  input  :         5   4    7
    output : 140 
    input  :          5   0   7
    output : 35 */
#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMult = 0;

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("please enter the number\t");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2,iValue3);

    printf("The multiplication is:%d",iRet);
    return 0;
}