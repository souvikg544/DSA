class Student {
    static String school;
    String name;   
 }
 

public class last {
    public static void main(String args[]) {
        Student.school = "JMV";
        Student s1 = new Student();
        Student s2 = new Student();
 
 
        s1.name = "Meena";
        s2.name = "Beena";
 
 
        System.out.println(s1.school);
        System.out.println(s2.school);
    }
    
}
