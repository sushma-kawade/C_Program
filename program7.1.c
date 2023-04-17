//write a program which accept from user and print that number of * and $ on scrren 
/*  Input : 5
    Output:     $   *  $  *    $   *  $ *    $   * 
    Input : 3
    output :    $    *      $     *    $    *   */
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(iCnt = 1; iCnt <= iNo; iCnt++)

        {
            printf("$\t");
            printf("*\t");
        }
        printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}
