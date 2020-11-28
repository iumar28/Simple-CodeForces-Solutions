#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
   


   int n,m,a,b,res=0;
   cin>>n>>m;
   for(int b=0;b<m*m;b++)
   {
    a=m-b*b;
    if(a*a+b==n)
        {res++;}
   }
   cout<<res<<endl;
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

    return 0;
}