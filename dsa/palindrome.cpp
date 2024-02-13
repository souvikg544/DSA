#include<iostream>
using namespace std;

bool checkPalindrome(char ch[], int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        if(ch[i]==ch[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int findLength(char ch[], int size)
{
    int index=0;
    while(ch[index]!='\0')
    {
        index++;
    }
    return index;
    }

int main()
{
    char ch[100];
    cin.getline(ch,100);
    int len=findLength(ch,100);
    bool isPalindrome=checkPalindrome(ch,len);
    if(isPalindrome)
    {
        cout<<"valid"<<endl;
    }

    else{
        cout<<"invalid"<<endl;
    }
}