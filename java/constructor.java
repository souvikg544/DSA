

class Student{
    String name;
    int age;

    public void printInfo()
    {
        System.out.println(this.name);
        System.out.println(this.age);
    }


    // Student(String name, int age)
    // {
    //     this.name=name;
    //     this.age=age;
    // }

    // Student()
    // {
    //     System.out.println("costructor class");
    // }this.name=


    Student(Student s2)
    {
        this.name=s2.name;
        this.age=s2.age;
    }

    Student()
        {

        }
}
    

    public class constructor{
        public static void main(String args[])
        {
            Student s1=new Student();
            s1.name="shrada";
            s1.age=22;
            Student s2=new Student(s1);

            // Student s1=new Student("aman",24);
            s2.printInfo();
        }
    }
//}
