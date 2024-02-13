#include<bits/stdc++.h>
using namespace std;
int main()
{
    // unordered_map<int,int>mpp;
    // mp.insert({1,10});
    // mp.insert({2,20});
    // mp.begin();
    // mp.end();
    // mp.clear();

    // if(mp.find(2)!=mp.end())
    // cout<<"true";

    // mp.erase(key);
    // mp.erase(iterator position);
    // mp.erase(iterator position1, iterator position 2);

    // mp.size();
    // mp.empty();
    //general information...

    unordered_map<int,int>mp;
    for(int i=1;i<=5;i++)
    {
        mp.insert({i,i*10});
    }

    cout<<"element present in map"<<endl;
    cout<<"key element"<<endl;


    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }

    int n=2;
    if(mp.find(2)!=mp.end())
    cout<<n<<"prsent in map"<<endl;

    mp.erase(mp.begin());
    cout<<"element after delete first element";

    cout<<"key element"<<endl;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }

    cout<<"size of map "<<mp.size()<<endl;

    if(mp.empty()==false)
    cout<<"map is not empty"<<endl;

    else
    cout<<"map is empty"<<endl;

    mp.clear();
    cout<<"size of mpp aftr clear "<<mp.size();

}
