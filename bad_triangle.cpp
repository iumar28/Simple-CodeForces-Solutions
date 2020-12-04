#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        set<int,greater<int>> s(arr,arr+n);


//        cout<<"max"<<max<<endl;
        for(int u=0;u<k;u++)
        {
            auto it=s.begin();
            int max = *it;
           /* for (int i = 1; i < n; i++) {
                if (max < arr[i]) {
                    max = arr[i];
                }
            }*/
            for( auto it=s.begin();it!=s.end();it++)
            {
                int a;
                *(it)=a;
                int(*it)=max-int(*it);
            }

        }
       /* for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/
       for(int x:s)
           cout<<x<<" ";
    }
    return 0;
}