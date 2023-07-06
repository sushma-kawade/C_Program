 /*write a program which accept one number and position from user and off that bit .Return modified number
 Input  :   10  2
 Output :   8....... */
 #include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OFFBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;   
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32))
    {
        printf("Invalid position, it should between 1 to 32\n");
        return false;
    }

    iMask = iMask << (Pos -1);

    iMask = ~iMask;

    Result =  No & iMask;
    
    return Result;

}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the position of bit\n");
    scanf("%d",&Position);

    bRet = OFFBit(Value,Position);
    printf("The updated number is\n",bRet);
    return 0;
}