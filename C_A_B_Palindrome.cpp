#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       string s;
       cin>>s;
       int n=s.size();
     
       for(int i=0;i<n/2;i++)
       {if(s[i]=='?' and s[n-i-1]!='?')
         s[i]=s[n-i-1];
        if(s[i]!='?' and s[n-i-1]=='?')
        s[n-i-1]=s[i]; 
        }
  
        int sa=0,sb=0;
      // loop to count number of 0's ans 1's present
      for(int i=0;i<n;i++)
      {if(s[i]=='0')
        sa++;
        else if(s[i]=='1')
        sb++;
      }
      a=a-sa;
      b=b-sb;
      // This loop assigns 0 if a>b and 1 if b>a
      for(int i=0;i<n/2;i++)
      {
         if(s[i]=='?')
         {
            if(a>b)
            {
               s[i]='0';s[n-i-1]='0';a=a-2;
            }
            else
            {
               s[i]='1';s[n-i-1]='1';b=b-2;
            }
            
         }
      }
     for(int i=0;i<n;i++)
     {
        if(s[i]=='?')
        {
           if(a>b)
           {s[i]=='0';s[n-i-1]='0';a--;}
           else
           {s[i]='1';s[n-i-1]='1';b--;}
           
        }
     }

     int flag=0;
     if(a==0 and b==0)
     {
        for(int i=0;i<n/2;i++)
        {
           if(s[i]!=s[n-i-1])
           {flag=1;break;}
        }
        if(flag==0)
     {cout<<s<<endl;}
     else
     {
        cout<<-1<<endl;
     }
     
     }
     else
     cout<<-1<<endl;
     
    }
    return 0;
}