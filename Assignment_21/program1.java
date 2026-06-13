import java.util.*;

class Logic
{
   void ProductofDigits(int iNo)
    {
        int iDigit=0;
        int iProduct=1;
        while(iNo>0)
        {
            iDigit=iNo%10;
            iProduct=iProduct*iDigit;
            
            iNo=iNo/10;
        }
        System.out.println("product of elements:"+iProduct);
    }
    
}
class program1
{
    
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.ProductofDigits(234);
       
       
    }
}


