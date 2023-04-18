/*Write a program which Display ASCII table.table contain symbol,Decimal,Hexadeciamal and octal representation of every memeber from o to 255.
*/
#include<stdio.h>

int main()
{
    int i = 0;

    printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Charcter\t Decimal\t Hex \t Octal");

    for(i = 0; i <=255; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }

    printf("\n_________________________________________________\n");

    return 0;
}