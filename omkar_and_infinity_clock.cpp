#include<iostream>
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
        int max = arr[0];
        for (int i = 1; i < n; i++) {
                if (max < arr[i]) {
                    max = arr[i];
                }
            }
//        cout<<"max"<<max<<endl;
            for(int u=0;u<k;u++)
                {
                for( int i = 0;i<n;i++)
                {
                 arr[i]=max-arr[i];
                }
                }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        }
    return 0;
}