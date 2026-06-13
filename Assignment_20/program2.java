import java.util.*;

class Logic
{
   void PrintReverse(int iNo)
    {
        int iCnt=iNo;
        while(iCnt>=1)
        {
            System.out.println(iCnt);
            iCnt--;
        }
        
    }
}
class program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintReverse(10);
       
    }
}


