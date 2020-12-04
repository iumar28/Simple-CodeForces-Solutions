#include<bits/stdc++.h>
using namespace std;
#define size 256

int main() {
    string str;
    int n;
    cin >> n;
    cin >> str;
    //int arr[size];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
    }
    int res = 0;
    //char ch;
    for (auto x:mp) {
        if (x.second > res) {
            res = x.second;
            //ch=x.first;}
        }

    }
    cout << res;
    return 0;
}