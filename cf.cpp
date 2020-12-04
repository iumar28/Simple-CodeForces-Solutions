#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {

           if(arr[0+arr[1] <= arr[n-1])
           {
               cout<< 1 << " " << 2 << n <<"\n";
           }
           else
               cout<<-1<<"\n";

        }
      
    }
    return 0;
}