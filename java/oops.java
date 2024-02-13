class Pen{
    String color;
    String type;//ball gelpen

    public void write()
    {
        System.out.println("write something");
    }

    //to acces the class data anpthe method
    public void printColor()
    {
        System.out.println(this.color);
    }

    //THIS--KEYWORD tells which object is calling

}


class Student{
    String name;
    int age;

    public void printInfo()
    {
        System.out.println(this.name);
        System.out.println(this.age);
    }

    Student()
    {
        System.out.println("costructor class");
    }
}
//these are method->function to acces the class data
public class oops {
    public static void main(String args[])
    {
        Pen pen1=new Pen();
        pen1.color="blue";
        pen1.type="gel";


        Pen pen2=new Pen();
        pen2.color="black";
        pen2.type="ball";

        pen1.printColor();
        pen2.printColor();

        pen1.write();


        Student s1=new Student();
        s1.name="aman";
        s1.age=24;

        s1.printInfo();
    }
    
}
