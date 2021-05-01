#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c[n][n];
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='*')
                {v.push_back({i,j});}

            }
        }
        if(v[0].second==v[1].second) {
            if (v[0].second == 0) {
                c[v[0].first][v[0].second + 1] = '*';
                c[v[1].first][v[1].second + 1] = '*';
            } else {
                c[v[0].first][0] = '*';
                c[v[1].first][0] = '*';
            }
        }

        if((v[0].second==v[1].first) and v[1].second!=v[0].first) {
            if (v[0].first == 0) {
                c[v[0].first + 1][v[0].second] = '*';
                c[v[1].first + 1][v[1].second] = '*';
            } else
                c[0][v[0].second] = '*';
            c[0][v[1].second] = '*';
        }
        
        else
        {
            c[v[0].first][v[1].second]='*';
            c[v[1].first][v[0].second]='*';
            // for(auto x:v)
            // {cout<<x.first<<" "<<x.second<<"\n";}
            // cout<<"\n after sorting\n";
            // sort(v.begin(),v.end());
            // for(auto x:v)
            // {cout<<x.first<<" "<<x.second<<"\n";}
        }
        for(int i=0;i<n;i++) {
            for (int j = 0; j < n; j++) {
                cout << c[i][j];
            }
            cout << "\n";
        }
        cout<<"\n";
        //endwhile
    }



//        for(auto x:v)
//        {cout<<x.first<<" "<<x.second<<"\n";}
    return 0;
}
/* 3 cases may arise
 * 1. if row is same
 * 2. if column is same
 * 3. * is at diagonal
 */

