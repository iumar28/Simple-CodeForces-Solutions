#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        unordered_set<int> s;
      for(int i=n,k=1;i>=1,k<=n;i--,k++)
      {a[k]=i;}
      for(int i=1;i<n;i++)
      {if(a[i]==i)
          {
          int temp;
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
          }
      }
      for(int i=1;i<=n;i++)
      {cout<<a[i]<<" ";}
      cout<<"\n";

  }

	return 0;
}