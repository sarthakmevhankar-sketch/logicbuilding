import java.util.*;

class Logic
{
   void FindMax(int a,int b)
    {
       if(a>b)
       {
        System.out.println("maximum number is :"+a);
       }
       else
       {
        System.out.println("maximum number is :"+b);
       }
    }
   
}
class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20,15);
       
    }
}


