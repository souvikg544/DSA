//polymorfism--poly many forms--mean--same function is use for diff purpose
//function overloading---work on compile time..
//diff parameter type,return type,argument type..

class Student{
    String name;
    int age;

    public void printInfo(String name)
    {
        System.out.println(name);
    }

    public void printInfo(int age)
    {
        System.out.println(age);
    }

    public void printInfo(String name, int age)
    {
        System.out.println(name+" "+age);
    }
}


public class poly {
    public static void mai(String args[])
    {
        Student s1=new Student();
        s1.name="aman";
        s1.age=24;
        s1.printInfo(s1.name,s1.age);
    }
    
    
}
