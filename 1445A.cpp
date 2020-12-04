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

	int n,x;
	cin>>n>>x;
	int a[n];
	int b[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(a[i]+b[i]>x)
		{
			flag=false;
			break;
		}
	}

	//cout<<res1<<" "<<res2<<endl;

	if(flag)
		cout<<"Yes\n";
	else
		cout<<"No\n";

}
	return 0;
}