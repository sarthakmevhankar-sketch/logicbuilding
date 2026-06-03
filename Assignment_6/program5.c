#include<stdio.h>
int TableReverse(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=iNo*-1;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("  %d\n",iNo*iCnt);   
    }

}
int main()
{
    int iValue=0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    TableReverse(iValue);

    
    return 0;

}