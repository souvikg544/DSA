#include<iostream>
using namespace std;

void convertToUpperCase(char ch[],int n)
{
    int index=0;
    while(ch[index]!='\0')
    {
        char currCharacter=ch[index];
        if(currCharacter>='a'&&currCharacter<='z')
        {
            ch[index]=currCharacter-'a'+'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    convertToUpperCase(ch,100);
    cout<<ch<<endl;
}