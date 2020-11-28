#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
    int n,m;
    cin>>n>>m;
    char a[n][m];
    vector<int> v;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][i]=='*')
            {v.push_back(a[i][j]);}
        }
    }
    for(auto x:v)
    {cout<<x<<" ";}



	#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    
	return 0;
}