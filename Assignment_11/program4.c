#include<stdio.h>


 int RangeSumEven(int iStart,int iEnd)
    {
        
        int iCnt=0;
        int iSum=0;
        if(iStart>iEnd)
        {
            printf("invalid");
            return 0;
        }
        if(iStart%2!=0)
            iStart++;
        for(iCnt=iStart;iCnt<=iEnd;iCnt=iCnt+2)
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
    iRet=RangeSumEven(iValue1,iValue2);
    printf("addition is %d:",iRet);
   
    return 0;
}