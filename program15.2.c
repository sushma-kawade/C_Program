/*Accept N number from user and return diffrance between frequency even number and odd numbers.......
Input:  N   :   6
                Elements : 85   66  3   80  93  88   90
output          1      (4 - 3)     ....*/
#include<stdio.h>
#include<stdlib.h>

int Diffrance(int Arr[], int iLength)
{
    int iCnt = 0,iEvenSum = 0, iOddSum = 0,iAns = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum++;
        }
        else
        {
            iOddSum++;
        }
    }
    return (iEvenSum - iOddSum);

}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int) * iSize);
    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
        
        iRet = Diffrance(p,iSize);

        printf("Result is %d",iRet);
        free(p);
        return 0;


}