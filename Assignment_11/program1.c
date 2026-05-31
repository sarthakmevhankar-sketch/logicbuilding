#include<stdio.h>


 void RangeDisplay(int iStart,int iEnd)
    {
        
        int iCnt=0;
        
        if(iStart>iEnd)
        {
            printf("invalid");
            return;
        }
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            printf("%d ",iCnt);
        }
       
    }
int main()
{
    int iValue1=0,iValue2=0;
   

    printf("enter stating number:");
    scanf("%d",&iValue1);

    printf("enter ending number:");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    
   
    return 0;
}