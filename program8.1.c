/*write a program which accept number from user and if number is less than 50then print small,if number is grater than 50
and less than 100 then print medium ,if it is gratre than 100 then print large....
    Input : 75
    output : Medium.....*/
#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("The numberof %d is small ",iNo);
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("number of %d is medium:",iNo);

    }
    else
    {
        printf("number is larger");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}