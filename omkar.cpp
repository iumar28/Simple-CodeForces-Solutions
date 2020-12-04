#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int seq[n];
        bool yn = 0;
        cin>>seq[0];
        for (int l = 1; l < n; l++)
        {
            cin>>arr[l];
            if(seq[l] != seq[l-1]){
                yn = 1;
            }
        }
        if(!yn){
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