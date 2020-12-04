#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        string str;
        cout << "Enter n\n";
        cin >> n;
        cout << "Enter str\n";
        cin >> str;
        int res = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((str[i] == '>' && str[i + 1] == '<') || (str[i] == '<' && str[i + 1] == '>')) {
                res++;
            }
        }
        if (str[0] == '>' && str[n - 1] == '<' || str[0] == '<' && str[n - 1] == '>')
            res++;
        cout << n - res << endl;
    }
    return 0;
}