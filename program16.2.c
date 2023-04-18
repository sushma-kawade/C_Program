/*Accept N number from user and accept one another number as NO,return index of first occurance of that number NO .......
Input:  N   :   6
        NO  :   66
                Elements : 85   66  3   66  93  88   90               
output          1 

Input:  N   :   6
        NO  :   12
                Elements : 85   11  3    93  11   111
output          -1   ....*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[], int iLength,int iNO)
{
    int iCnt = 0, iPos = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            iPos = iCnt;
        }
    }
    return iPos;

}
int main()
{
    int iSize = 0,iSize1 = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of element\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int) * iSize);
    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Enter element to find out the first oocurance : \n");
    scanf("%d",&iSize1);
        
    iRet = FirstOcc(p,iSize,iSize1);
        if(iRet == -1)
        {
            printf("There is no %d in the array\n",iSize1);
        }
        else
        {
            printf("%d is occured in the array at first index %d\n",iSize1,iRet);
        }
        printf("Result is %d",iRet);
        free(p);
        return 0;


}