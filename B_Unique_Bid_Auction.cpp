#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,ans,tk,res;
        bool flag=false;
        cin>>n;
        int a[n];
        vector<int> v;
        map<int,int> m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
      
       for(auto x:m)
        {
            if(x.second==1)
          v.emplace_back(x.first);
           flag=true;
        }
        if(v.size()==0)
        {
            res=-1;
        }
        else
        {
            sort(v.begin(),v.end());
            tk=v[0];
            for(int i=1;i<=n;i++)
            {
                if(tk==a[i])
                {res=i;
                break;}
            }
        }
        cout<<res<<endl;
        
    }
    return 0;
}