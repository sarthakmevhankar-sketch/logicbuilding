#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
   
    int iCnt=0;
    int iFre=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFre++;
        }
    }
    return  iFre;
}

int main()
{
    int iRet=0;
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
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
    iRet=Frequency(p,iSize);
    printf("frequency pf 11 is %d",iRet);
    free(p);
return 0;
}