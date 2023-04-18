/*Write a program which accept number from user and convert it into capital case 

Input: marvellous multi os
Output:Marvellous Multi OS....*/

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);   // stelwrX(100);

    printf("String after conversion is : %s\n",Arr);

    return 0;
}