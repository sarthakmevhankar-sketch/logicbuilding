import java.util.*;

class Logic
{
   void PrintDivisibleBy2and3(int iNo)
    {
        int iCnt=1;
        while(iCnt<=iNo)
        {
            if(iCnt%2==0 && iCnt%3==0)
            {
                System.out.println(iCnt);
            }
            iCnt++;
        }

    }
    
}
class program5
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintDivisibleBy2and3(30);
    }
}


