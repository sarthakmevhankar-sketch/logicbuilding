#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return TRUE;
        }
        
    }
    return FALSE;
}

int main()
{
    int iRet=0;
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
    int iValue=0;
    BOOL bRet=FALSE;
    printf("enter number of elements:");
    scanf("%d",&iSize);
    printf("enter the number:");
    scanf("%d",&iValue);
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
    bRet=Check(p,iSize,iValue);
    if(bRet==TRUE)
    {
        printf("number is present");
    }
    else
    {
        printf("number is not present");
    }
    free(p);
return 0;
}