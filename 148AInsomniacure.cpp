#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int k,l,m,n,sum=0;
	ll d;
	cin>>k>>l>>m>>n>>d;
	
	for(int i = 1; i <= d; i++)
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) sum++;
	cout<<sum<<endl;
	return 0;
}