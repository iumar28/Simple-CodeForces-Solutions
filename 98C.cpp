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
		string str;
		cin>>str;
		int a=0,b=0,res=0;
		int ans=0;
		for(int i=0;i<str.length();i++)
        {
		    if(str[i]=='(' || str[i]=='[')
            {a++;}
           else if(str[i]==')' || str[i]==']')
            {b++;}
        }

		if(a==b)
		    res=a;
        else if(a>b)
            res=a-b;
        else
            res=b-a;
        cout<<res<<endl;

	}



	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;
}