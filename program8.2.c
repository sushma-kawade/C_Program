/*accept single digit number from user and print it into word..
     Input : 9
     ouput : Nine..
     Input : 3
     ouput : Three
     Input : 12
     output : Invalid number....*/

#include<stdio.h>
void Display(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
        case 0:
        printf("zero");
        break;
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default:
        printf("Invalid number\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
     return 0;
}
     