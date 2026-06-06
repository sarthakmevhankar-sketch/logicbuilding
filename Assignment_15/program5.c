#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    
    int iCnt=0;
    int iProduct=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
           if(iProduct==0)
           {
                iProduct=1;
           }
           iProduct=iProduct*Arr[iCnt];
        }
        
    }
    return iProduct;
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
    iRet=Product(p,iSize);
    printf("output is %d",iRet);
    free(p);
return 0;
}