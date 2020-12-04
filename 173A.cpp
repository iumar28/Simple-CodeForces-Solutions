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
	string str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		if(str[i]=="++X" || str[i]=="X++")
		{
			sum++;
		}
		else
			sum--;
	}
	cout<<sum;
}