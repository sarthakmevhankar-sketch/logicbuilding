#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

int main()
{
    int iValue=0;
    printf("Enetr number of elemnts:");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}