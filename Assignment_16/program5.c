#include<stdio.h>
#include<stdlib.h>
 

int DigitsSum(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
        iSum=0;
        for(;Arr[iCnt]>0;Arr[iCnt]=Arr[iCnt]/10)
        {
            iSum=iSum+(Arr[iCnt]%10);
        }
        Arr[iCnt]=iSum;
    }    
}                                                               
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
     
    
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
    DigitsSum(Brr,iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    printf(" %d",Brr[iCnt]);
    }
    printf("\n");
    free(Brr);
    return 0;
}