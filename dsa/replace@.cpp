#include<iostream>
using namespace std;

void replaceCharacter(char ch[],int n)
{
    int index=0; 
    while(ch[index]!='\0')
    {
        char Curr=ch[index];
        if(Curr=='@')
        {
            ch[index]=' ';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    replaceCharacter(ch,100);
    cout<<ch<<endl;
}