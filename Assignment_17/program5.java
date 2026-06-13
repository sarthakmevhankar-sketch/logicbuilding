import java.util.*;

class Logic
{
   void PrintTable(int iNo)
    {
        int iCnt=0;
    
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            System.out.printf(" %d\n",iNo * iCnt);
        
        }
    }
   
}
class program5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);
       
    }
}


