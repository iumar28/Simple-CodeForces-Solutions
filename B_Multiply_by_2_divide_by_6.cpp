#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

      ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        
        ll n,s2=0,s3=0;
        cin>>n;
        while(n%2==0)
        {s2++;
        n/=2;}

        while(n%3==0)
        {
            s3++;
            n/=3;
        }

        if(n==1)
        {
            if(s2<=s3)
            {
                ll ans=min(s2,s3);
                s2-=ans;
                s3-=ans;
                ans=ans+s2*2;
                cout<<ans<<"\n";

            }
            else
            cout<<"-1\n";
        }
        else
        cout<<"-1\n";
        }
    return 0;
        


    }
