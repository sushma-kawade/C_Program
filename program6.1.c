//write a program which accept name from user and print that name......
/*  Input:Piyush Khairnar
    output:piyush khairnar*/

    #include<stdio.h>

    int main()
    {
        char Name[30];
        printf("please enter full name\n");
        gets(Name);
        printf("Your names is %s:   ",Name);
        return 0;
    }