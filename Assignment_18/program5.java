import java.util.*;

class Logic
{
   int CheckSign(int iNo)
    {
       if(iNo>0)
       {
            return 1;
       }
       else if (iNo<0)
       {
            return -1;
       }
       else
       {
            return 0;
       }
    }
}
class program5
{
    public static void main(String args[])
    {   
        int iRet=0;
        Logic obj = new Logic();
        iRet=obj.CheckSign(0-8);
        if(iRet==1)
        {
        System.out.println(" number is positive");
        }
        else if(iRet==-1)
        {
        System.out.println("number is negative");
        }
        else
        {
            System.out.println("number is zero");
        }
       
    }
}


