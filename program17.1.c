/*Accept number from user and return the largest number..
Input : N :  6
        Elements : 85   66  3   66  93  88
output :   :  93        */

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)   // 5
{
    int iMax = Arr[0], iCnt = 0;
    //      1           2          3
    for(iCnt = 0; iCnt < iLength; iCnt++) // N
    {
        if(Arr[iCnt] > iMax)    // 4
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet  = Maximum(p,iSize);   // 4

    printf("Maximum number is : %d\n",iRet);

    free(p);      // 6

    return 0;
}