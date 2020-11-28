#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
    int n,sum=0,ans=0,count=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        sum+=data;
        v.emplace_back(data);
    }
    sort(v.begin(),v.end());
    while(sum>=ans)
    {
        int x=v.back();
        ans+=x;
        v.pop_back();
        sum=sum-x;
        count++;

    }
  cout<<count<<"\n";

	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}