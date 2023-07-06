/*Draw a recursive program which display below pattern
Input:      6
Output:     a   b   c   d   e   f  .............*/
#include<stdio.h>

void DisplayR(int iNo)
{
    static char ch = 'a';
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