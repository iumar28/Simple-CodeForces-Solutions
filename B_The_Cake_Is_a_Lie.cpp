#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,k,x=1,y=1,cost=0;
       cin>>n>>m>>k;
       if(n==m)
       {x++;cost+=x;n++;}
       while(true){

           if(n<m)
           {y++;cost+=x;
           if(x==n and y==m)
           break;}
           else if(n>m)
           {x++;cost+=y;
           if(x==n and y==m)
           break;
           }
          
       }
       cout<<cost<<endl;
       

       
    }
    return 0;

}