import java.util.*;
import Bank;


//single level inheritance...
//shape class--base class
class Shape{
    public void area()
    {
        System.out.println("displays area");
    }
}

class Triangle extends Shape{
    //triangle--base class shape--derived class
    public void area(int l,int h)
    {
        System.out.println(1/2*l*h);
    }
}

//multiple level inheritance..
class EquilateralTriangle extends Triangle{
    public void area(int l,int h)
    {
        System.out.println(1/2*l*h);
    }

}


//hirerachical class
class Circle extends Shape{
    public void area(int r)
    {
        System.out.println((3.14)*r*r);
    }
}


public class inherit {
    public static void main(String args[])
    {

        Bank.Account account1=new Bank.Account();
        account1.name="customer1";
        
    }
    
}
