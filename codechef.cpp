#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int t;
    cin>>t;
    while(t--)
    {
        int  m,n,rx,ry;
        cin>>m>>n;
        cin>>rx>>ry;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='U')
            {rx++;}
            else if(str[i]=='D')
            {rx--;}
            else if(str[i]=='R')
            {
                ry++;
            }
            else if(str[i]=='L')
            {
                ry--;
            }			}			}
}
if(rx<0 || rx>m)
{
cout<<"Dangerous";
}
if(ry<0 || ry>m)
{
cout<<"Dangerous";
}
else
cout<<"Reached";

}
return 0;
}