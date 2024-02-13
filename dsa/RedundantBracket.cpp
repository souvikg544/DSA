#include<iostream>
#include<stack>
using namespace std;


bool checkRedundant(string &str)
{
    stack<char>st;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            st.push(ch);
        }

        else if(ch==')')
        {
            int operatorCount=0;
            while(!st.empty() && st.top()!='(')
            {
                char temp=st.top();
                if(temp=='+'||temp=='-'||temp=='*'||temp=='/')
                {
                    operatorCount++;
                }
               st.pop();
            }
        // yha pe jb puchege jb stack empty ho gya ho ya fir stack top opening bracet present ho
        st.pop();

        if(operatorCount==0)
        {
            return true;
        }
        }

        // gar main yha tk pucha hu
        // iska mtlb hr ek bracket k pair k beech me
        // ek op pkka milega hoga

        return false;
    
}
int main()
{
    string str="((a+b)*(c+d))";
    bool ans=checkRedundant(str);

    if(ans==true)
    {
        cout<<"Redundant Bracets Present"<<endl;
    }

    else{
        cout<<"Redundant Brackets Not Present"<<endl;
    }
}