#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
     private:
     string gf;
    // by dafault it is private 
    public:
    int id;  
    int age;
    string name;
    int nos;
    bool present;

     // default constructor
    Student()
    {
        cout<<"student constructor called"<<endl;
    }
    Student(int _id, int _age, string _name, int _nos, bool _present, string _gfname)
    {
        id=_id;
        age=_age;
        name=_name;
        nos=_nos;
        present=_present;
        gf=_gfname;
        cout<<"student parameterized ctor called"<<endl;
    }
    // method
    void study()
    {
        cout<<"study"<<endl;
    }
    void sleep()
    {
        cout<<"sleep"<<endl;
    }
    void bunk()
    {
        cout<<"bunk"<<endl;
    }
    private:
    void gfchat()
    {
        cout<<"chatting"<<endl;
    }
};  

int main()
{
    //cout<<sizeof(Student)<<endl;
    Student s1;
    // s1.name="lakshay";
    cout<<s1.age<<endl; //garabge give 
    // s1.id=1;
    // s1.nos=5;
    // s1.present=1;
    // Student s2;
    // s2.name="chota bheem";
    // s2.age=11;
    // s2.id=2;
    // s2.nos=1;
    // s2.present=0;

    // constru
    Student s2(1,12,"chota bheem",1,1,"chutki");
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;

    Student s3(2,15,"lokesh",0,5,0);
    cout<<s3.name<<endl;
// int *a=new int(5);
    Student *s4=new Student(3,34,"chintu",1,6,0);
    cout<<s4->name<<endl;
    cout<<(*s4).name<<endl;
    delete s4; //no leak
    return 0; 
}