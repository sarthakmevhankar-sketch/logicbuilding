#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    
    int iCnt=0;
    int iIndex;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iIndex=iCnt;
        }
        
    }
    return iIndex;
}
int main()
{
    int iRet=0;
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
    int iValue=0;
    
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
    iRet=LastOcc(p,iSize,iValue);
    printf("output is %d",iRet);
    free(p);
return 0;
}