/*Accept N number from user and display all such element which are divisible by 5...
Input:  N   :   6
                Elements : 85   66  3   80  93  88  
output      :    85  80            ....*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0,iAns = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("the element is divisible by five: %d\n",Arr[iCnt]);
        }
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