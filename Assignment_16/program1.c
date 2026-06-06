#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=0;

    iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
        if(Arr[iCnt]>iMax)
        {
           
           iMax=Arr[iCnt];
        }
    }    
    return iMax;
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
    iRet=Maximum(Brr,iLength);
    printf("maximum element is %d",iRet);
    free(Brr);
    return 0;
}