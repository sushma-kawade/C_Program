//write a program which accept number from user and print all odd number up to N 
/*  Input  :    18
    output :     1      3       5    7      9       11      13  */
#include<stdio.h>
int OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            printf("%d\t",iCnt);
        }
    }    

}
int main()
{ 
    int iValue = 0;
    printf("Enter the Value\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
        

     return 0;

}