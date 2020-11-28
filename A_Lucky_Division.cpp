#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int ans=0;
    bool res=false;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {ans++;}
    }

    if(ans==str.size())
    {res=true;}
    else
    {
        int no = stoi(str);
        if(no%4==0 || no%7==0)
        {cout<<"78";bool res=true;}
    }
    if(res)
    {cout<<"NO\n";}
    else
        cout<<"YES\n";

	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}