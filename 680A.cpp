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
	while(t--){

	int a,b,c,d;
	cin>>a>>b>>c>>d;	

	int res=max(a+b,c+d);
	cout<<res<<endl;
}

	return 0;
}