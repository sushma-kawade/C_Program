
/*Accept N number from user accept one another number as NO,Check whether NO is present or not.....
Input:  N   :   6
                Elements : 85   66  3    11   80  93   
output          66 is present...

Input:  N    :  6
output:      :  12
output:      :  Element :  85       11      3       11      111        */
#include<stdio.h>
#include<stdlib.h>

int iFrequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iFrequency = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    
    }
    return iFrequency;

}
int main()
{
    int iSize = 0,iSize1 = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int) * iSize);
    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Enter another number : \n");
    scanf("%d",&iSize1);
        
    iRet = iFrequency(p,iSize,iSize1);
    printf("the return frequency of no is: %d\n",iRet);

    free(p);
    return 0;
}