//write a program which accept number from user and display its  all Non factor ......
/*  Input-    12
    output-  5   7   8   9   10  11  
    
    Input-10
    output- 3   4   6   7   8   9      */
    
#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    printf("Non factors are:\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    NonFact(iValue);
    return 0;
}

