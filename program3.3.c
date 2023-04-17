//write the program which accept number from user print even factor of that number...
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 2;  i<=iNo/2; i++)
    {
        if(iNo % i && i == 0)
        {
            printf("%d\n",i);

        }
    }
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d,&iValue");
DisplayEvenFactor(iValue);
return 0;
}