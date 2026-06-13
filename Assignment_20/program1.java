import java.util.*;

class Logic
{
   int SumEvenNumbers(int iNo)
    {
        int iCnt=0;
        int iEvenSum=0;
        while(iCnt<=iNo)
        {
            if(iCnt%2==0)
            {
                iEvenSum=iEvenSum+iCnt;
            }
            iCnt++;
        }
        return iEvenSum;
    }
}
class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        int iRet=obj.SumEvenNumbers(10);
        System.out.println("Sum of even numbers are:"+iRet);
       
    }
}


