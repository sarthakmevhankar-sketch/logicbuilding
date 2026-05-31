#include<stdio.h>


 double fhtoCS(float fTemp)
 {
    double dCelsius=0.0;
    dCelsius=(fTemp-32)*(5.0/9.0);
    return dCelsius;
 }

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter tempreture in fahreneit:");
    scanf("%f",&fValue);
    

    dRet=fhtoCS(fValue);
    printf("%f\n",dRet);
    return 0;
}