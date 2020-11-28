#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/




	map<int,int> m;
	int a[4];
	for(int i=0;i<4;i++)
    {
    	cin>>a[i];
	    m[a[i]]++;
    }
    int max=0;
	for(auto x:m)
    {
	    if(x.second>max)
        {max=x.second;}
    }
	cout<<max-1<<endl;

	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif



	return 0;
}