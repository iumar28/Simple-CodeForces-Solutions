#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> m;
        vector<int> v;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            {v.push_back(x.second);}
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]==v[0])
            {ans=i;}
        }
        cout<<ans<<endl;
    }
    return 0;
}