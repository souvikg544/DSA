#include<iostream>
using namespace std;
int x=2; // global variable
void fun()
{
    int x=60;
    cout<<x<<endl;
    ::x=40;
    cout<<::x<<endl;
}

int main()
{
    ::x=40; //global x
    int x=20; //loacl to main() fn
    cout<<x<<endl;
    cout<<::x<<endl; // asceding global with :: 

    {
        int x=50;
        {
            int x=40;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    fun();
    return 0;

}