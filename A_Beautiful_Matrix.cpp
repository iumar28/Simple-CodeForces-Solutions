#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	

    int n;
    int ic,jc;
    int x;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {ic=i;
            jc=j;}
        }
    }
    int d1=abs(jc-3);
    int d2=abs(ic-3);
    cout<<d1+d2;


	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}