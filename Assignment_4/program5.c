#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int iFactSum=0;
    int iNonFactSum=0;
    int iDiff=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactSum=iFactSum+iCnt;
        }
        else
        {
            iNonFactSum=iNonFactSum+iCnt;
        }
    }
    iDiff=iFactSum-iNonFactSum;
    return iDiff;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("%d",iRet);
    
    return 0;

}