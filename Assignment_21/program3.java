import java.util.*;

class Logic
{
   void DisplayFactors(int iNo)
    {
        int iCnt=1;
        while(iCnt<=iNo)
        {
            if(iNo%iCnt==0)
            {
                System.out.println(iCnt);
            }    
            iCnt++;
            
        }
    }
    
}
class program3
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayFactors(12);
       
       
    }
}


