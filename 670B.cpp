#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin >> t;


    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int product = 1;

        for (int k = 0; k < n; k++) {
            cin >> arr[k];
        }
        if(arr[i]<arr[j] && arr[j]<arr[k] && arr[l]<arr[t]) {
            for (int j = 0; j < n; j++) {
                product = product * arr[j];
            }
        }
        cout << product<<endl;
        }

    return 0;

    }
