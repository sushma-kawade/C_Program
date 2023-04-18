/*Accept characetr from user.It is capital then display all  the character from the input characetristics till z
if input character is csamall then print all the charcaetr in reverse order till a
in order cases retrun directly
Input   Q
Output  Q   R   S   T   U   V   W   X   Y   Z

Input   m
Output  m   l   k   j   i   h   g   f   e   d   c   b   a  .... */

#include<stdio.h>
void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",ch);
    }
        /*else if((ch >= 'a') && (ch <= 'z'))
        {
            printf()
        }*/


    

} 

int main()
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}