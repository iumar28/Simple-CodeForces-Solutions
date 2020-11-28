#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   int n,a,b,c;
   cin>>n;
   int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b>>c;
       if(a+b+c>=2)
       {sum++;}
   }
   cout<<sum<<endl;
    

    return 0;
}  