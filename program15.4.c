/*Accept N number from user and return frequency of 11 from it.....
Input:  N   :   6
                Elements : 85   66  3   80  93  88  
output          0

Input:  N   :   6
                Elements : 85   11  3   80  11  111 
output          2          ....*/

#include<stdio.h>
#include<stdlib.h>

int iFrequency(int Arr[], int iLength)
{
    int iCnt = 0,iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;

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
        
        iRet = iFrequency(p,iSize);

        printf("Result is %d",iRet);
        free(p);
        return 0;


}