#include<stdio.h>
void DisplayOddFactor(int iNo)
{
    int i = 0;
    for(i = 1;i <= iNo/2; i = i+2)
    {
        if((iNo % i) == 0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayOddFactor(iValue);
    return 0;
}