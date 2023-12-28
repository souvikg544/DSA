#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c=&ch[0];
    cout<<c<<endl;

// until he do not get null character he never stop

   char temp='z';
   char *p=&temp;
   cout<<p<<endl;

    

}