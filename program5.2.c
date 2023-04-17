//write a program which accept number from user and display its factor in decending order......
/*Input-    12
 output -    6  4   2   3   2   1   
          
 Input -    10
 output-    5   2   1 */
#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    printf("factors are:\n");
    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
        printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",& iValue);

    FactRev(iValue);
    return 0;
}