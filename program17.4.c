 /*Accept number from user and Display all such numbers which contains 3 digit in it.
Input : N :  6
        Elements : 8225   665  3   76  953  858
output :   :  665   953    858       */

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)   // 5
{
    int iDigit = 0,iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > 100) && (Arr[iCnt] < 999))
        {
            printf("The number contain 3 digit %d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *p = NULL;
    int iSize = 0, i = 0, iRet = 0;

    printf("Enter number of elements : \n");    // 1
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int) * iSize); // 2

    printf("Enter the elements : \n");      // 3
    for(i = 0; i < iSize; i++)
    {
       scanf("%d",&p[i]); 
    }
    Digit(p,iSize);

    free(p);      // 6

    return 0;
}