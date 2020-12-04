#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll arr[n][3];
	ll sum=0;



	for(int i=0;i<n;i++)
	{
			cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
			if(arr[i][0]+arr[i][1]+arr[i][2]>1)
			{
				sum++;
			}
	}
	cout<<sum;

	return 0;

}