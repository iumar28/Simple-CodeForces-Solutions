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

	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	
	if(n==1 || n==2 || n==4)
		{
		cout<<-1<<"\n";
		continue;
		}
	int a=0,b=0,c=0;

	c=n/7;
	n=n%7;
	if(n==0)
		{
			cout<<a<<" "<<b<<" "<<c<<"\n";
			continue;
		}
	if(n==3 || n==6)
		{a=n/3; }
	else if(n==1)
		{c=max(c-1,0);
			n+=7;
			a=1;b=1;}
	else if(n==2)
		{c=max(c-1,0);a=3;}
	
	else if(n==4)
		{c=max(c-1,0);a=2,b=1;}
	else if(n==5)
		{c=max(c-1,0);b=1;}
	
	cout<<a<<" "<<b<<" "<<c<<"\n";

	
}

	return 0;
}