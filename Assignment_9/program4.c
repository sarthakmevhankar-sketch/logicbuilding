#include<stdio.h>


 int MulDigits(int iNo)
    {
        int iDigit=0;
        int iMult=1;

      while(iNo!=0)
        {

            iDigit=iNo%10;
            iMult=iMult*iDigit;
            iNo=iNo/10;
            
        }
        return iMult;
    }

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet=MulDigits(iValue);
    printf("%d\n",iRet);
    return 0;
}