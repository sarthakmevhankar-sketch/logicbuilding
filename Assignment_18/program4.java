import java.util.*;

class Logic
{
   void SumEvenOddNumbers(int iNo)
    {
        int iDigit=0;
        int iEvenSum=0,iOddSum=0;
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit%2==0)
            {
                iEvenSum+=iDigit;
            }
            else
            {
                iOddSum+=iDigit;
            }
            iNo=iNo/10;
        }
        System.out.println("sum of even numbers are:"+iEvenSum);
        System.out.println("sum of odd numbers are:"+iOddSum);
    }
}
class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddNumbers(123456);
       
    }
}


