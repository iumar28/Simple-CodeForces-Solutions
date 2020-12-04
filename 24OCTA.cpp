#include<bits/stdc++.h>
using namespace std;

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
	int n,m;
	long long sum=0;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum==m)
		{cout<<"YES\n";}
	else
		cout<<"NO\n";
}

	return 0;
}