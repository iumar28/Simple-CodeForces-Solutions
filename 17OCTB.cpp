#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        stack<char> s;
        s.push(str[0]);
        for (int i = 1; i < str.length(); i++) {
            if (s.size() == 0) {
                s.push(str[i]);
            } else if (str[i] == 'B' && s.top() == 'A')
                s.pop();
            else if (str[i] == 'B' && s.top() == 'B')
                s.pop();
            else
                s.push(str[i]);
        }

        cout << s.size() << endl;
    }
    return 0;
}