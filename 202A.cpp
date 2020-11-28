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

	string str,res;
	cin>>str;
	sort(str.begin(),str.end(),greater<int>());
	char a=str[0];
	res=res+str[0];
	int i=1;
	while(str[i]==a)
    {res=res+str[i];
    i++;}
	cout<<res;


	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}