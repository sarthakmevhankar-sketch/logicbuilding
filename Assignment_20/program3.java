import java.util.*;

class Logic
{
   void CheckPerfect(int iNo)
    {
        int iCnt=1;
        int iSum=0;
        while(iCnt<iNo)
        {
            if(iNo%iCnt==0)
            {
                iSum=iSum+iCnt;
            }    
                iCnt++;
               
        }
        if(iSum==iNo)
        {
             System.out.println(iNo+" number is perfect");
        }
        else
        {
             System.out.println(iNo+" number is not perfect");
        }
    }
}
class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPerfect(6);
       
    }
}


