import java.util.*;

class Logic
{
   void PrintDigits(int iNo)
    {
        int iDigit=0;
        int iCount=0;
        while(iNo>0)
        {
            iDigit=iNo%10;
            System.out.println(iDigit);
            iNo=iNo/10;
        }
    }
    
}
class program4
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintDigits(9876);
       
       
    }
}


