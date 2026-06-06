#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    
    int iCnt=0;
    int iIndex;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
    printf("\n");
}
int main()
{
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
    int iValue1=0;
    int iValue2=0;
    
    printf("enter number of elements:");
    scanf("%d",&iSize);
    
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elememt%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("enter start:");
    scanf("%d",&iValue1);
    printf("enter end:");
    scanf("%d",&iValue2);

    Range(p,iSize,iValue1,iValue2);
   
    free(p);
return 0;
}