/*Draw a recursive program which display below pattern
Output:     a   b   c   d   e   f   .............*/
#include<stdio.h>

void DisplayR()
{
    static char ch = 'a';
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