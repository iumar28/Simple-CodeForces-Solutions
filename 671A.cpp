#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;


    while(t--) {
       int n,find=0;
       cin>>n;
       int i=1;
       int size=0;
       int arr[n];
       for(i=1;i<=n;i++)
       {
           cin>>arr[i];
           size++;
       }

       if(size ==1)
       {
           if(arr[i]%2==0)
           {
               cout<<"2\n";
           }
           else
               cout<<"1\n";
       }
     /*if(n%2==0)
       {
           cout<<"2";
       }*/
     else

       for(int i=1;i<n;i++)
       {
         for(int j=i;j<=n;j=j+i){
             arr[j]=0;}
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]!=0)
           {
               find=arr[i];
           }
       }
        if(find&1)
            cout<<"1\n";
        else if(!find&1 && n%2==0)
            cout<<"FIND--2\n";

       return 0;

    }
    }