#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int iLength)
{
    int iEvenSum=0,iOddSum=0;
    int iCnt=0;


    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenSum+=Arr[iCnt];
        }
        else
        {
            iOddSum+=Arr[iCnt];
        }
        }

    return (iEvenSum-iOddSum);
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
    iRet=Diffrence(p,iSize);
    printf("result is %d",iRet);
    free(p);
return 0;
}