#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> v,vi;
    string str,s;
    cin>>str;
    for(int x=0;x<str.length();x++){
        if(str[x]!='+')
        {v.emplace_back(str[x]);}
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
       vi.push_back(x);
       vi.push_back('+');
    }
    vi.pop_back();
    for(auto x:vi)
    {
       cout<<x;
    }


    return 0;
    

}