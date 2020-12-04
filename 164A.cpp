#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int sum=0;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{	
		cin>>a[i]>>b[i];
		for(int j=0;j<i;j++)
		{
			if(a[i]==b[j])
			{
				sum++;

			}
			if(b[i]==a[j])
			{
				sum++;
			}
		}
	}
	
	cout<<sum;

	return 0;
}