import java.util.*;

class Logic
{
   void CheckDivisible(int iNo)
    {
        if(iNo%5==0 && iNo%11==0)
        {
            System.out.println("number is divisible by 5 and 11 ");
        }
        else
        {
            System.out.println("number is not divible by 5 and 11");
        }
    }   
   
}
class program3
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(99);
    }
}


