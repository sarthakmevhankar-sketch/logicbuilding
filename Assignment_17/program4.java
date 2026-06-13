import java.util.*;

class Logic
{
   void FindMin(int a,int b,int c)
    {
       if(a<b && a<c)
       {
        System.out.println("minimum number is :"+a);
       }
       else if(b<a && b<c)
       {
        System.out.println("minimum number is :"+b);
       }
       else
       {
        System.out.println("minimum number is :"+c);
       }
    }
   
}
class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMin(3,7,2);
       
    }
}


