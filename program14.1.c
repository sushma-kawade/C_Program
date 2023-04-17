/*Accept N number from user and return diffrance between summation of even elements ans summation of odd elements.
Input:  N   :   6
                Elements : 85   66  3   80  93  88  
output          53      (234 - 181)     ....*/
#include<stdio.h>
#include<stdlib.h>

int Diffrance(int Arr[], int iLength)
{
    int iCnt = 0,iEvenSum = 0, iOddSum = 0,iAns = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    iAns = iEvenSum - iOddSum;
    return iAns;

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