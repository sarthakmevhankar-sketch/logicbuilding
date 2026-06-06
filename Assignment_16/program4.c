#include<stdio.h>
#include<stdlib.h>
int Digits(int Arr[],int iSize)
{
    int iCnt=0;
    int iCount=0;
    int iNo=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
        iCount=0;
        iNo=Arr[iCnt];
        for(;iNo>0;iNo=iNo/10)
        {
            iCount++;
        }
        if(iCount==3)
        {
            printf("%d\n",Arr[iCnt]);
        }
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
    printf("enter the numbers :\n",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter the number %d:",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    printf("numbers having 3 numbers are :\n");
    Digits(Brr,iLength);
    
   
    
    free(Brr);
    return 0;
}