#include<bits/stdc++.h>
using namespace std;


int main()
{

        map<int, int> m;
        vector<int> v;


        int n;
        cin >> n;
        if(n==1)
        {cout<<"0";return 0;}
        for (int i = 0; i < n; i++) {
            int data;
            cin >> data;
            m[data]++;
        }
        for (auto x:m) {
            int data = x.second;
            v.push_back(data);
        }
        sort(v.begin(), v.end(), greater<int>());
        int diff = v[0] - v[1];
        cout << n - diff<<endl;

	return 0;
}