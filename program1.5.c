//accept one number from user and print the number of * on the screen.

#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }

}
int main()
{ 
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}