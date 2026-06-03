#include<stdio.h>
int OddFactorial(int iNo)
{
    int iResult=1;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    else
    {
        iCount=iNo;
    }
    
    for(int i=1;i<=iCount;i++)
    {
        if(i%2!=0)
        {
        iResult=iResult * i;
        }
    }
   return iResult;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=OddFactorial(iValue);
    printf(" odd factorial of number is %d",iRet);
    return 0;
}