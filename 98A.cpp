#include<bits/stdc++.h>
using namespace std;


int rec(int x,int y)
	{

	if(x==0 && y==0)
		{return 0;}
	else if(x==y)
	{
		return x+y;
	}
	else if (x==0 || y==0)
	{
		int max=0;
		if(x==0)
		{max=y;}
		else
			max=x;
		
		return max+max-1;
	}
	else
		{if(x<y)
			{return rec(x-1,y);}
			else
				{return rec(x,y-1);}
		}
	}




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
	int x,y;
	cin>>x>>y;

	int res=rec(x,y);
	cout<<res<<endl;
}




	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}