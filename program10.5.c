/*write program which accept area in square feet and converted it into square meter..(1 square meter = 0.0929 suare meter)
Input   : 5  
output  : 0.464515
Input   :   7
output  :  0.650321     */
#include<stdio.h>
double SquareMeter(int iNo)
{
    float SquareFeet = 0.0;
    SquareFeet = iNo * 0.0929;
    
    return SquareFeet;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the Area in squre feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("The temprature is converted of celcius is  %lf\n",dRet);
    return 0;
}