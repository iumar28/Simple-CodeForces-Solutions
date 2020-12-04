#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {


   

        ll n,k=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            // cout<<"Enter array element no"<<j<<"-";
            cin>>arr[j];
        }
        sort(arr,arr+n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<E
    }
    return 0;
}