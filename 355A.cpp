#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int n,h;
	cin>>n>>h;
	int arr[n];
	int width=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=h)
		{
			width++;
		}
		if(arr[i]>h)
		{
			width+=2;
		}
	}
	cout<<width;
}