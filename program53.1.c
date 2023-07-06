/*Draw a recursive program which display below pattern
Output:     *   *   *   *   *   .............*/
#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR(); // Recursive Call
    }
}

int main()
{
    DisplayR();

    printf("\nEnd of main\n");

    return 0;
}