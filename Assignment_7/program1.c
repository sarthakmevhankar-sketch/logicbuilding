#include<stdio.h>
void Display(int iNo)
{
    int iCount,i;
    if(iNo<0)
    {
        iCount=-iNo;
    }
    else
    {
        iCount=iNo;
    }
    
    for(i=0;i<iCount;i++)
    {
        printf("* ");
    }
    printf(" ");
    for(i=0;i<iCount;i++)
    {
        printf("# ");
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}