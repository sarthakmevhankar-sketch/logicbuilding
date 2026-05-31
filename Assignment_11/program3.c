#include<stdio.h>


 int RangeSum(int iStart,int iEnd)
    {
        
        int iCnt=0;
        int iSum=0;
        if(iStart>iEnd)
        {
            printf("invalid");
            return;
        }
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            iSum=iSum+iCnt;
        }
        return iSum;
    }
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("enter stating number:");
    scanf("%d",&iValue1);

    printf("enter ending number:");
    scanf("%d",&iValue2);
    iRet=RangeSum(iValue1,iValue2);
    printf("%d\n",iRet);
   
    return 0;
}