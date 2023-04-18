/*Accept division of student from users and depends on the division display exam timing .there are 4 division on in school A,B,C,D.
Exam of division A at 7 AM,B at 8.30,C at 9.20 AM and D at 10.30 AM.(Appliction should br case insensitive)

Input   C
Output  your exam at 9.30 AM 

Input   D
Output  your exam at 10.30 AM......*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{ 
    switch(chDiv)
    {
        case 'A':
        printf("A your exam at 7 AM");
        break;

        case 'B':
        printf("Your exam at 8.30");
        break;

        case 'C':
        printf("Your exam at 9.20 AM");
        break;

        case 'D':
        printf("Your exam at 10.30 AM");
        break;
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}