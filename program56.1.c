/*write a recursive program which accept string from user and count white Spaces
Input:  HE llo WOr lD
Output: 3.......*/

#include<stdio.h>

int WhiteSpaceR(char *str)
{
    static int iCnt = 0,count = 0;
    if(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            count++;
        }
        iCnt++;
        WhiteSpaceR(str);
        
    }
    return iCnt++;
}
    

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String \n");
    scanf("%s",arr);

    iRet = WhiteSpaceR(arr);

    printf("%d",iRet);

    return 0;

}