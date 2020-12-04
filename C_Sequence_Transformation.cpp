#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        map<int,int> m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int occurence=-1,value;
        for(auto x:m)
        {
            if(x.second>occurence)
            {occurence=x.second;
                value=x.first;}
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==value)
            {
                if(a[i]!=a[i-1])
                {count++;}
            }
            
        }
        if(a[0]==a[1])
        cout<<count-1<<endl;
        else
        {
            cout<<count<<endl;
        }
        
    }
}