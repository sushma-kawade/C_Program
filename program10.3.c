/*write program which accept Distance in kiometer from user and convert it into meter area..(1km = 1000 meter)
Input   :   5
output  :   5000    
Input   :   12
output  :   12000*/
#include<stdio.h>
double KMtoMeter(int iNo)
{
    int meter = 0;
    meter = iNo * 1000;
    return meter;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("The distance converted KM to meter of is  %d\n",iRet);
    return 0;
}