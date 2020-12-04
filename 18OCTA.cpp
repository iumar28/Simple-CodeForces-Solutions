#include <bits/stdc++.h>
using namespace std;


int Xor(int l, int m)
{
	int j = 0, x = 0;


	while (l || m) {


		if ((l & 1) && (m & 1)) {


			x += (1 << j);
		}

		l >>= 1;
		m >>= 1;
		j += 1;
	}
	return x;
}


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int l,m;
	  cin>>l>>m;
	  int X = Xor(l,m);

	   cout<< (l ^ X) + (m ^ X)<<endl;
    }
	return 0;
}