
//parameterized  constructor......
class Student{
    String name;
    int age;

    public void printInfo()
    {
        System.out.println(this.name);
        System.out.println(this.age);
    }

    Student(String name, int age)
    {
        this.name=name;
        this.age=age;
    }
}


public class para {
    public static void main(String args[])
    {
        Student s1=new Student("aman",24);
        s1.printInfo();
        System.out.println("s1");


    }
    
}
