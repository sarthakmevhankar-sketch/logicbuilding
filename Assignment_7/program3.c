#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iResult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int i=2;i<=iNo;i=i+2)
    {
        iResult=iResult * i;
    }
   return iResult;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf(" even factorial of number is %d",iRet);
    return 0;
}