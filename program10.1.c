/*write program which accept radius of circle from user and calculate its area..consider value of PI as 3.14(Area = PI * Radius * Radius)*/
#include<stdio.h>
double CircleArea(float fRadius)
{
    float iArea = 0.0;
    iArea = 3.14 * fRadius * fRadius;
    return iArea;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The area of circle is  %f\n",dRet);
    return 0;
}