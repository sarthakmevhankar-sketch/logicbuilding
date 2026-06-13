import java.util.*;

class Logic
{
   void CountEvenOddRange(int iNo)
    {
        int iEvenCnt=0;
        int iOddCnt=0;
        int iCnt=1;
        while(iCnt<=iNo)
        {
           if(iCnt%2==0)
           {
                iEvenCnt++;
           }
           else
           {
                iOddCnt++;
           }
        iCnt++;
        }
        System.out.println("count of even numbers :"+iEvenCnt);
        System.out.println("count of odd numbers:"+iOddCnt);
    }
    
}
class program2
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountEvenOddRange(50);
       
       
    }
}


