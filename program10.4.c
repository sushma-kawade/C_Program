/*write program which accept temprature in fahrenheit converted celcius..(1 Celcius = (Fahrenheit - 32) * (5/9))
Input   : 10  
output  :  -12.2222 ..(10 - 32) *(5/9)
Input   :   34
output  :   1.11111    (34-32)*(5/9) */
#include<stdio.h>
double FhtoCs(float fTemp)
{
    float fCelsius = 0.0;
    fCelsius =((fTemp - 32)*5)/9;
    
    return fCelsius;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temprature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("The temprature is converted of celcius is  %f\n",dRet);
    return 0;
}