//Write a program which accept number from user and display its multiplication of factors ...
/*input:12
  output:144

  input:13
  output:1

  input:10
  output:10*/
  
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) ==0 )
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("multiplication of factors are %d",iRet);
    return 0;
    
}