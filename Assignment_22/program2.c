#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    for(iCnt=0,iDigit=iNo;iCnt<iNo;iCnt++,iDigit--)
    {
        printf("%d\t#\t",iDigit);
    }  
    printf("\n");
}    
int main()
{
    int iValue=0;
    printf("Enetr number of elemnts:");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}