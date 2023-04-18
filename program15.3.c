/*Accept N number from user check whether that number contains 11 in it or not...
Input:  N   :   6
                Elements : 85   66  3    11   80  93   
output          11 is present...
Input:  N    :  6
output:      :      ....*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return -1;
        }
    
    }
    return iCnt;

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
        
        iRet = Check(p,iSize);

        if(iRet == -1)
        {
            printf("11 is present");
        }
        else
        {
            printf("11 is absent");
        }
        free(p);
        return 0;
}