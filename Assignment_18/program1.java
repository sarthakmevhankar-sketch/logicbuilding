import java.util.*;

class Logic
{
   void Checkprime(int iNo)
    {
        int iCnt=0;
        for(iCnt=2;iCnt<iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                break;
            }
        }
        if(iCnt==iNo)
        {
            System.out.println("it is a prime number ");
        }
        else
        {
            System.out.println("it is not a prime number ");
        }
    }
   
}
class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.Checkprime(12);
       
    }
}


