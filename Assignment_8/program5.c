#include<stdio.h>


 double SqareMeter(float fArea)
 {
    double dResult=0.0;
    dResult=fArea * 0.0929;
    return dResult;
 }

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter square feet :");
    scanf("%f",&fValue);
    

    dRet=SqareMeter(fValue);
    printf("%f\n",dRet);
    return 0;
}






