#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if(abs(d>=r-b) and r>=1 and b>=1)
        {cout<<"YES\n";}
        else
        {cout<<"NO\n";}
        
    }
    return 0;

}