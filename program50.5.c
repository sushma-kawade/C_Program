/*Write a program which accept no from user and OFF 7th & 10 th bit of thatnumber if it is ON..Return modified number*/
#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    0000    0000    1111

//  0X0000000F

UINT ONBit(UINT No)
{
    UINT iMask = 0X0000000F;
    UINT iAns = 0;

    iAns = No | iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ONBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}


