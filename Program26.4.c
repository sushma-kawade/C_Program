/*writw a program which accept string from user and toggle the case

Input:  Marvellous Multi OS
Output: mARVELLOUS mULTI os.....*/

#include<stdio.h>

void strtoggleX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 0) && (*str <= 9))
        {
            iCnt++;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr); 

    printf("String after conversion is : %s\n",Arr);

    return 0;
}