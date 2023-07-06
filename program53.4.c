/*Draw a recursive program which display below pattern
Output:     A   B   C   D   E   F   .............*/
#include<stdio.h>

void DisplayR()
{
    static char ch = 'A';
    static int iCnt = 1;

    if(iCnt <=6 )
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        DisplayR(); 
    }
}

int main()
{
    DisplayR();

    printf("\nEnd of main\n");

    return 0;
}