#include<stdio.h>
void PrintEven(int iNo)
{
    int i=0;
   
   if(iNo<=0)
   {
    return;
   }
  for(i=2;i<=iNo*2;i=i+2)
  {
    printf("%d\t",i);
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