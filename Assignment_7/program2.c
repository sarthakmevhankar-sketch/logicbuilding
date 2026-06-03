#include<stdio.h>
int DollarToInr(int iNo)
{
   return iNo*70;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number in USD:");
    scanf("%d",&iValue);
    iRet=DollarToInr(iValue);
    printf(" value of INR is %d",iRet);
    return 0;
}