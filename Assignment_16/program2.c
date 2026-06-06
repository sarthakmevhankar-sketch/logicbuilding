#include<stdio.h>
#include<stdlib.h>
 

int Minimum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=0;

    iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
        if(Arr[iCnt]<iMin)
        {
           
           iMin=Arr[iCnt];
        }
    }    
    return iMin;
}                                                               
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
     
    int iRet=0;
    printf("Enter no Elements:");
    scanf("%d",&iLength);
    
    Brr=(int *)malloc(iLength*sizeof(int));
    if(Brr==NULL)
    {
        printf("unable to take input ");
        return -1;
    }
   
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter the number %d:",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    iRet=Minimum(Brr,iLength);
    printf("smallest element is %d",iRet);
    free(Brr);
    return 0;
}