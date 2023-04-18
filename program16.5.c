/*Accept N number from user and retrun product of all odd elements.....
Input:  N   :   6
                Elements : 15   66  3    70   10  88   
output          45...

Input:  N    :  6
             :  Element :  44    66   72    70   10   88 
output       :  0      */

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0,iMult = 1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    
    }
    return iMult;

}
int main()
{
    int iSize = 0,iSize1 = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int) * iSize);
    printf("Enter the number of :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
        
    iRet = Product(p,iSize);
    printf("Product is %d\n",iRet);
    free(p);
    return 0;
}