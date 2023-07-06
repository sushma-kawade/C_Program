/*write a program which checks whether first and last bit is ON or OFF first bit means bit number 1 and last bit number 32.*/
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0100    0000    0000    0000    0000    0000    0000    0001

//  4       0       0       0       0       0       0       1

//  40000001

// 0X40000001

bool CheckBit(UINT No)
{
    UINT iMask = 0X40000001;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("5 & 8th bit is on\n");
    }
    else
    {
        printf("5 & 8th bit is off\n");
    }
    return 0;
}
