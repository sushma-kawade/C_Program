/*Accept N number from user and display all such element which are multipiles 11...
Input:  N   :   6
                Elements : 85   66  3   55 93  88  
output      :    55     66      88            ....*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 1,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      Arr[iCnt] * 11;
        printf("the element is multiplies by 11: %d\n",Arr[iCnt]);
        
        
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize*sizeof(int) * iSize);
    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }
    Display(P,iSize);
    free(P);
    return 0;
}