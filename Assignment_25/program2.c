#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    
    for(i=1;i<=iRow;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",j*2);
            }    
        }
        else
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",(j*2)-1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enetr number for row:");
    scanf("%d",&iValue1);
    printf("Enetr number for column:");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}