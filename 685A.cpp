
#include <bits/stdc++.h> 
using namespace std;

vector<int> PrimeFactors(int n) 
{ 
	
	vector<int> v; 

	int x = n; 

	// run a loop upto sqrt(n) 
	for (int i = 2; i * i <= n; i++) { 
		if (x % i == 0) { 

			// place this prime factor in vector 
			v.push_back(i); 
			while (x % i == 0) 
				x /= i; 
		} 
	} 

	// This condition is to handle the case when n 
	// is a prime number greater than 1 
	if (x > 1) 
		v.push_back(x); 

	return v; 
} 

// function that returns good number 
int GoodNumber(int n) 
{ 
	// distinct prime factors 
	vector<int> v = PrimeFactors(n); 

	// to store answer 
	int ans = 1; 

	// product of all distinct prime 
	// factors is required answer 
	for (int i = 0; i < v.size(); i++) 
		ans *= v[i]; 

	return ans; 
} 

int main()
{
    int ans=0;

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
       int res=GoodNumber(n);
       for(int i=0;i<;i++)
       {

       }
        
        cout <<ans<<endl;
    }

	return 0; 
} 
