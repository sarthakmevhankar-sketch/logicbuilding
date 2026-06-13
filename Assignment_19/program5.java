import java.util.*;

class Logic
{
   int CalculatePower(int base,int exp)
    {
        int iCnt=0;
        int iPower=1;
        for(iCnt=1;iCnt<=exp;iCnt++)
        {
            iPower=iPower*base;
        }
        return iPower;
    }
}
    
class program5
{
       public static void main(String args[])
    {
        Logic obj = new Logic();
        int iRet=obj.CalculatePower(2,5);
        System.out.println(iRet);
    }
}


