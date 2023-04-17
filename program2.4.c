// problem statments : Accept two number from user and display the first number in second number of times.....
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 5; iCnt % iNo; iCnt++)
    {
        printf("first no %d second number no %d\n",iCnt);
    }
}
int main()
{ 
    int iValue = 0;
    int iCount = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;

}