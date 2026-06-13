import java.util.*;

class Logic
{
   void DisplayFactors(int iNo)
    {
        int iCnt=1;
        int iCount=0;
        while(iCnt<=iNo)
        {
            if(iNo%iCnt==0)
            {
                iCount++;
            }    
            iCnt++;
            
        }
        System.out.println("total factors : "+iCount);
    }
    
}
class program4
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayFactors(12);
       
       
    }
}


