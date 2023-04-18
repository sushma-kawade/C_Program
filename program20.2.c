//Accept number of row and number of columns from user and display below pattarn on the scrren.
/*  iRow = 4        iCol = 4
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = 'A';
    for(i = 1; i<=iRow; i++)
    {
        for(j = 0; j<iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch + i);

            }
            else
            {
                printf("%c\t",ch + j); 
            }
        }

        printf(" \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of row and columns\n");
    scanf("%d%d",&iValue1, &iValue2);
     
    Pattern(iValue1, iValue2);
    return 0;
}