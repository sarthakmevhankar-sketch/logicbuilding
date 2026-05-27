#include<stdio.h>
void PrintEven(int iNo)
{
    int i=0;
   
   if(iNo<=0)
   {
    iNo=-iNo;
   }
  for(i=1;i<=iNo;i++)
  {
    if(iNo%i==0&& iNo%2==0)
    {
        printf("%d\t",i);
    }
  
  }
}
int main()
{
    int iValue=0;
    

    printf("enter number:");
    scanf("%d",&iValue);
    
    PrintEven(iValue);
    return 0;
}