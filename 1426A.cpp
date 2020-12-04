#include<bits/stdc++.h>
using namespace std;

int t;
int n,x;
int main()
{


    cin>>t;
   	while(t--)
   	{
    	    				
    	cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else
            n-=2;
        	cout<<(n-1)/x+2<<endl;
    }


	return 0;
}