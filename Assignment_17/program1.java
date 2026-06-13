import java.util.*;

class Logic
{
    int SumOfDigits(int iNo)
    {
        int iSum = 0;

        for(; iNo != 0; iNo = iNo / 10)
        {
            iSum = iSum + (iNo % 10);
        }

        return iSum;
    }
   
}

 class program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        int iRet=obj.SumOfDigits(1234);
        System.out.println("sum of digits:"+iRet);
    }
}