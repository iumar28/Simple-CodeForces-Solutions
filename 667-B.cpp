#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,n=0;
        cin>>a>>b>>x>>y>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {

            if(a>=x){a=a-1;};
            if(b>=y){b=b-1;};
            arr[i]=a*b;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
               int* i1;
        i1 = std::min_element(arr+0, arr+n);
        cout<<*i1;
        return 0;
    }

    }