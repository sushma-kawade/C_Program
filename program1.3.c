
//problem statments 3).. : program to print 5 to 1 numbers on the screen.. 

/* Algorithma : 
START 

End
*/

//function name : void Display
// Description : display the five time Marvellous on the screen
//Input : integer
//output : string
//Author : kawde sushma kisan
//Date : 18/10/2022

#include<stdio.h>
void Display()
{
    int i =0;
    int j = 5;
    for (i=5; i>0; i--)
    {
        printf("%d\n", i);
        j++;
    
    }
    
}
int main()
{
    Display();
    return 0;
}
