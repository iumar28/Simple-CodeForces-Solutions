#include<bits/stdc++.h>
using namespace std;

int main()
{


/*    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/

	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		int res=0;
		cin>>n>>k;
		int p=n*k;
		int arr[p];

		for(int i=0;i<p;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+p,greater<int>());

		for(int i=1;i<p;i=i+2)
        {
		    res=res+arr[i];
        }
		cout<<res<<endl;

	}

	return 0;
}