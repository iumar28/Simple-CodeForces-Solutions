
#include <bits/stdc++.h> 
using namespace std; 

int firstNonRepeating(int arr[], int n) 
{ 
	for (int i = 1; i <=n; i++) { 
		int j; 
		for (j = 1; j <=n; j++) 
			if (i != j && arr[i] == arr[j]) 
				break; 
		if (j == n) 
			return i;
	} 
	return -1; 
} 

// Driver code 
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[n];
        }
        int res=firstNonRepeating(a,n);

        cout<<res<<"\n";

    }
	return 0; 
} 
