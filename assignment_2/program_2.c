//acacept a  umber  for user and print hat number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    iCnt=iNo;
    while(iCnt>0)
    {
        printf("*");
        iCnt--;
    }
}
int main()
{
    int iValue=0;

    printf("enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}