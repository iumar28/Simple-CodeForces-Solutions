#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int  m,rx=0,ry=0,n,count;
		int x=0,y=0;
		cin>>m>>n;
		cin>>rx>>ry;
		cin>>count;
		string str;
		cin>>str;
		
		for(int i=0;i<count;i++)
		{
			//cout<<str[i]<<" "
			if(str[i]=='U')
			{y++;}
			 if(str[i]=='D')
			{y--;}
			if(str[i]=='R')
			{
				x++;
			}
			if(str[i]=='L')
			{
				x--;
			}
		}
		cout<<"Case "<<i+1<<": ";
		if(x>m || y>n || x<0 || y<0)
		{
			cout<<"DANGER\n";
		}
		else if(rx==x || ry==y)
		{
			cout<<"REACHED\n";
		}
		else
			cout<<"SOMEWHERE\n";
	}
	return 0;
}