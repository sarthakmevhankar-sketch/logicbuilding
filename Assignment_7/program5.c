#include<stdio.h>
int FactorialDiff(int iNo)
{
  
    int iCount=0;
    int iEven=1,iOdd=1;
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
        if(i%2==0)
        {
            iEven=iEven*i;
        }
        else
        {
            iOdd=iOdd*i;
        }
    }
   return iEven-iOdd;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf(" odd factorial of number is %d",iRet);
    return 0;
}