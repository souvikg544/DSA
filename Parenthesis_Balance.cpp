#include <math.h>
#include <iostream>
#include <stack>

using namespace std ;

bool parenBal(string s)
{
    stack<char> st ;
    bool ans = true ;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] =='[')
        st.push(s[i]) ;

        else if (!st.empty() && st.top() == '(' && s[i] == ')')
        {
            st.pop() ;
            ans = true ;
        }
        else if (!st.empty() && st.top() == '[' && s[i] == ']')
        {
            st.pop() ;
            ans = true ;
        }
        else if (!st.empty() && st.top() == '{' && s[i] == '}')
        {
            st.pop() ;
            ans = true ;
        }

        else
        ans = false ;
        
    }

    if(!st.empty())
    ans = false ;

    return ans ;

}
int main()
{ 
    string inp ;
    cin >> inp ;
    if(parenBal(inp))
    cout << "Valid String" <<endl ;

    else
    cout << "InValid String" << endl ;

    return 0 ;
}
