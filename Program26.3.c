/*writw a program which accept string from user and toggle the case

Input:  Marvellous Multi OS
Output: mARVELLOUS mULTI os.....*/

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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