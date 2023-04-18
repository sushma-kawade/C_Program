/*Accept number of Rows and Columns from user and display below pattern
Input : iRow = 4        iCol = 4
Output:     2   4   6   8   10   
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9           ..*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;

        for(i = 2; i<= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {   
                if(10 % 2 == 0)
                {
                    printf("%d\t",iCnt);
                    iCnt++;
                }
                else
                {
                    printf("%d",iCnt);
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