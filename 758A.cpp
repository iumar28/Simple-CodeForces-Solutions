#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	int max=0;
	int sum=0;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	else

	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
		}

	}
	
	for(int i=0;i<n;i++)
	{
		int diff=max-arr[i];
	sum+=diff;
		}
	cout<<sum;
	return 0;
}