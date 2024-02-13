#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> prevSmallerElement(int *arr, int size, vector<int> &ans)
{
    stack<int>st;
    st.push(-1);

    for(int i=0;i<size-1;i--)
    {
        int curr=arr[i];
        // answer find akro curr k liye
        while(st.top()>=curr)
        {
            st.pop();
        }

         ans[i]=st.top();

        st.push(curr);
    }

    return ans;
}
int main()
{
    int arr[5]={8,4,6,2,3};
    int size=5;

    vector<int>prev(size);
    cout<<" prev "<<endl;
    prev=prevSmallerElement(arr,size,prev);
    for(auto i : prev)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}