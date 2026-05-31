#include<stdio.h>


 int CountEven(int iNo)
    {
        int iDigit=0;
        int iCount=0;

      while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit>3 &&iDigit<7)
            {
                 iCount++;
            }
           
            iNo=iNo/10;
            
        }
        return iCount;
    }

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("%d\n",iRet);
    return 0;
}