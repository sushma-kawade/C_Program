/*Draw a recursive program which display below pattern
Input:      6
Output:     A   B   C   D   E   F   .............*/
#include<stdio.h>

void DisplayR(int iNo)
{
    static char ch = 'A';
    static int iCnt = 1;

    if(iCnt <= iNo )
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        DisplayR(iNo); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number");
    scanf("%d",&iValue);

    DisplayR(iValue);
    
    return 0;
}