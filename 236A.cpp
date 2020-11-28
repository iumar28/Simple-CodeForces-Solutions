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

	string str;
	cin>>str;
	set <char> s(begin(str), end(str));
	if(s.size()%2==0)
		{cout<<"CHAT WITH HER!\n";}
	else
		cout<<"IGNORE HIM!\n";




	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}