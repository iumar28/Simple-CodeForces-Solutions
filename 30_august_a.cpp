#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int nostring,count=0;
        bool found=false;
        cin>>nostring;
        string s[nostring];
        for(int i=0;i<nostring;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<nostring;i++)
        {
            bool found=s[i].find(s[i+1]);
            if(found==true)
                count++;
            found=false;

        }
        if(count==nostring)
            cout<<"YES\n";
        else
            cout<<"NO\n";

            }
#



        return 0;
    }