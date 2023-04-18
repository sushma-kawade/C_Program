/*Accept number of Rows and Columns from user and display below pattern
Input : iRow = 4        iCol = 4
Output:     *   #   #   #   
            *   *   #   #
            *   *   *   #
            *   *   *   *           ..*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;

        for(i = 1; i<= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {   
                if(i>=j)
                {
                    printf("\t*");
                }
                else
                {
                    printf("\t#");
                }
            }
            printf("\n");
        } 
    }
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\t");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}