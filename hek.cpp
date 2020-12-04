#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        bool diff = 0;
        cin>>arr[0];
        for (int i = 1; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] != arr[i-1]){
                diff = 1;
            }
        }
        if(!diff){
            cout<<n;
        }
        else
        {
            cout<<1;
        }
        cout<<endl;
    }

    return 0;
}