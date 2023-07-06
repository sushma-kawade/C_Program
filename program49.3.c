/*write a program which checks whether 7th & 15th & 21st & 28th bit is ON or OFF.*/
#include<stdio.h>
#include<stdbool.h>

// 

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    1000    0001    0000    0100    0000    0100    0000

//  0       8       1       0       4       0       4       0

//  08104040

// 0X08104040

bool CheckBit(UINT No)
{
    UINT iMask = 0X08104040;
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





        //No              1   0   1   1   0   0   0   1   

        // Mask           1   1   1   1   0   1   1   1

        //  --------------------------------------------------------

        // Result         1   0   1   1   0   0   0    1