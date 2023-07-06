/*Draw a recursive program which display below pattern
Output:     5   4   3   2   1   .............*/
#include<stdio.h>

void DisplayR()
{
    static int iCnt = 4;

    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        DisplayR(); 
    }
}

int main()
{
    DisplayR();

    printf("\nEnd of main\n");

    return 0;
}