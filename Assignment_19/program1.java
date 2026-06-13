import java.util.*;

class Logic
{
   boolean CheckLeapYear(int iYear)
    {
       if(iYear%4==0)
       {
            return true;
       }
       else
       {
            return false;
       }
    }
}
class program1
{
    public static void main(String args[])
    {   
       
        Logic obj = new Logic();
        boolean bRet=obj.CheckLeapYear(2024);
        if(bRet)
        {
        System.out.println("it is a leap year");
        }
        else
        {
            System.out.println("it is not a leap year");
        }
       
    }
}


