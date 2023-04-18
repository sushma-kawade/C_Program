/*Accept number from user and display summation of digit of each number.
Input : N :  6
        Elements : 8225   665  3   76  953  858
output :   :  17    17  3   13   17  21        */

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)   // 5
{
    int iMax = Arr[0], iMin = Arr[0],iCnt = 0,iSum = 0,j = 0;
    //      1           2          3
    for(iCnt = 0; iCnt < iLength; iCnt++) // N
    {
        for(j = 0; j = 3; j++)
        {
            if(iMax = Arr[iCnt] % 10) 
            {
            //iSum = iSum + iMax;
                Arr[iCnt] = Arr[iCnt] / 10;
                iSum = iSum + iMax;

            printf("the summation of digit are:%d\n",Arr[iCnt]);
            }
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
    DigitSum(p, iSize);

    free(p);      // 6

    return 0;
}