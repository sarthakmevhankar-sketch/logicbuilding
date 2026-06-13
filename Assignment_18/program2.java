import java.util.*;

class Logic
{
   void PrintEvenNumbers(int iNo)
    {
        int iCnt=0;
        for(iCnt=0;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
            System.out.println(""+iCnt);
            }
        }

    }
    
}
class program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);
       
    }
}


