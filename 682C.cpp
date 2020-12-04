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
	int n,m;
	cin>>n>>m;
	int arr[n][m];

	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j-1]==arr[i][j])
					arr[i][j]+=1;
			}
		}
/*	for(int i=n;i>=1;i--)
	{
		for(int j=m;j>=1;j--)
		{
			if(arr[i][j-1]==arr[i][j])
			{
				//cout<<"equal\n";
				arr[i][j]+=1;
			}
		}
	}*/
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}



	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}
