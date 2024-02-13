class student{
    String name;
    static String school;


    public static void changeSchool()
    {
        school="newschool";
    }
}


public class ops {
    public static void main(String args[])
    {
        student.school="jmv";
        student student1=new student();
        student1.name="tony";
        System.out.println("student1.school");
    }
    
}
