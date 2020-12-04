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

	
	int a,b,minimum,maximum;
		cin>>a>>b;

		if(a<b)
			{minimum=a;
				maximum=b;}
		else
			{minimum=b;
				maximum=a;}

		int result=maximum-minimum;
		if(result<2)
			{result=0;}

		else
		{
			result=result/2;
		}




		cout<<minimum<<" "<<result;

	

	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

    return 0;
  }