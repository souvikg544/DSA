// optimal
 int majorityWins(vector<int> v)
    {
       umap<int,int>mpp;
    //   nlongn
    
    for(int i=0;i<v.size();i++)
    {
        mpp[v[i]]++;
    }
    
    // on
    for(auto it: mpp)
    {
        if(it.second>(v.size()/2))
        {
            return it.first;
        }
    }
    return -1;
    
    }

    // best .............................
    int majorityElement(vector<int> v)
    {
        int cnt=0;
        int el;
        for(int i=0;i<v.size();i++)
        {
            if(cnt==0)
            {
                cnt=1;
                el=v[i];
            }

            else if(v[i]==el)
            {
                cnt++;
            }

            else{
                cnt--;
            }
        }
        
        int cnt1=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==el)
            cnt1++;
        }

        if(cnt1>(v.size()/2))
        {
            return el;
        }

        return -1;
    }
