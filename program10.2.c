/*write program which accept width and height of rectangle from user and calculate its area.
Input : 5.3     9.78
output: 51.834  */
#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    float iArea = 0.0;
    iArea = fWidth * fHeight;
    return iArea;

}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width\n");
    scanf("%f",&fValue1);

    printf("Enter the Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("The area of reactangle is  %f\n",dRet);
    return 0;
}