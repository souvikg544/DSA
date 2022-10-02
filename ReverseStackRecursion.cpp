// Problem: Reverse Stack using Recursion
// Time complexity: O(n^2)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int> &st, int x)
{

    if (st.size() == 0)
    {
        st.push(x);
    }
    else
    {

        int a = st.top();
        st.pop();
        pushAtBottom(st, x);

        st.push(a);
    }
}

void reverse(stack<int> &st)
{
    if (st.size() > 0)
    {

        int x = st.top();
        st.pop();
        reverse(st);

        pushAtBottom(st, x);
    }
    return;
}

int main()
{
    stack<int> st, st2;
    // intializing the stack with some elements
    for (int i = 1; i <= 4; i++)
    {
        st.push(i);
    }

    st2 = st;
    // printing the original stack
    cout << "Original Stack" << endl;
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;
    // function call to reverse the stack
    reverse(st);
    // printing the reversed stack
    cout << "Reversed Stack" << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
