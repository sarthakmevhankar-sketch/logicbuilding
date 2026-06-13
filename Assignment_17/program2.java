import java.util.*;

class Logic
{
    boolean CheckPalindrome(int iNo)
    {
        int iDigit=0;
        int iSum=0;
        int iRev=0;
        int iTemp=iNo;
        while(iNo!=0)
        {
           iDigit=iNo%10;
           iRev=(iRev*10)+iDigit;
            iNo=iNo/10;
            
        }
        if(iRev==iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}    
class program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        boolean bRet=obj.CheckPalindrome(1234);
        if(bRet==true)
        {
            System.out.println("the number is palindrome");
        }
        else
        {
            System.out.println("the number is not palindrome");
        }
    }
}