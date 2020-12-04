#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=0;
        cin >> t;
        while(t--) {
            int npiles = 0, nstones = 0;
            int count = 0;
            cin >> npiles;
            int arr[npiles];
            for (int i = 0; i < npiles; i++) {
                cin >> arr[i];

                if (arr[i] == 0) {
                    count++;
                }
            }

            if (npiles & 1 && count % 2 == 0)
                cout << "T\n";
            else
                cout << "HL\n";
        }
    return 0;
}