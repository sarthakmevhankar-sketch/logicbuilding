import java.util.*;

class Logic
{
   void findSmallestDigit(int iNo)
    {
        int iDigit=0;
        int iSmallest=9;
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit<iSmallest)
            {
                iSmallest=iDigit;
            }
            iNo=iNo/10;
        }
        System.out.println("smallest digit is "+iSmallest);
    }
    
}
class program5
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}


