/*Accept N number from user and accept one another number as NO,return index of Last occurance of that number NO .......
Input:  N   :   6
        NO  :   66
                Elements : 85   66  3   66  93  88                  
output          3

Input:  N   :   6
        NO  :   93
                Elements : 85   66  3    66  93   88
output          4   ....*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength,int iNO)
{
    int iCnt = 0, iPos = -1;

    for(iCnt = iLength -1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNO)
        {
            break;
        }
    }
    if(iCnt == -1)
    {
        return-1;
    }
    else
    {
        return iCnt;
    }

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
    printf("Enter element to find out the last oocurance : \n");
    scanf("%d",&iSize1);
        
    iRet = LastOcc(p,iSize,iSize1);
        if(iRet == -1)
        {
            printf("There is no %d in the array\n",iSize1);
        }
        else
        {
            printf("%d is occured in the array at last index %d\n",iSize1,iRet);
        }
        free(p);
        return 0;


}