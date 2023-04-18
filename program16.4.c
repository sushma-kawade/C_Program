/*Accept N number from user and accept range,Display all elements from that range .......
Input:  N        : 6
        start    : 66
        End      : 90
        Elements : 85   66  3   66  93  88                  
output :    66      76      88  

Input:  N        : 6
        start    : 30
        End      : 50
        Elements : 85   66  3   76  93  88                  
output :   nothing-bcoz 30-50 not any value in give list...                      ....*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength,int iNo1,int iNo2)
{
    int iCnt = 0, iPos = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}
int main()
{
    int iSize = 0,iValue1 = 0,iValue2 = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of element\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize*sizeof(int) * iSize);
    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
        
    Range(p,iSize,iValue1,iValue2);

    free(p);
    return 0;


}