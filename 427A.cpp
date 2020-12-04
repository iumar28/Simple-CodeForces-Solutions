#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int n;
	cin>>n;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i=i+2)
	{
		cin>>a[i];

	}

	for(int i=0;i<n-1;i++)
	{	if(ans>=0){
		ans=ans+a[i];
	}
	}
	cout<<ans;

	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}