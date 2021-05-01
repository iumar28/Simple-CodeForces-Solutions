#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> v;
       for(int i=0;i<n;i++)
       {int data;
       cin>>data;
        v.emplace_back(data);
      }
      while(v.size()>2)
      {
        int sz=v.size();
        int x=v[sz-1];
        int y=v[sz-2];
        v.pop_back();
        v.pop_back();
        v.emplace_back(x^y);
      }
     if(v[0]==v[1])
     {cout<<"YES\n";}
     else
     {cout<<"NO\n";}
      

    }
    return 0;

}