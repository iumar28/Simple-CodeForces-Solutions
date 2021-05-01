#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,find,index;map<int,int> mp;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {cin>>a[i];mp[a[i]]++;}
        for(auto x:mp)
        {if(x.second==1)
            find=x.first;}
        // cout<<find<<"\n";
        for(int i=0;i<n;i++)
        {if(a[i]==find)
       index=i;}
       cout<<index+1<<"\n";
        // for(int i=0;i<n;i++)
        // {if(a[i]==find)
        // index=i;break;}
        // cout<<index<<"\n";
        
    }
    return 0;
}