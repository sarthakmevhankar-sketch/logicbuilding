import java.util.*;

class Logic
{
   void DisplayGrade(int iMarks)
    {
        if(iMarks>=90)
        {
            System.out.println("A Grade");
        }
        else if(iMarks>=80)
        {
            System.out.println("B Grade");
        }
        else if(iMarks>=70)
        {
            System.out.println("C Grade");
        }
        else if(iMarks>60)
        {
            System.out.println("D Grade");
        }
        else if(iMarks>50)
        {
            System.out.println("E Grade");
        }
        else if(iMarks<35)
        {
            System.out.println("Fail");
        }
    }
   
}
class program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayGrade(99);
       
    }
}


