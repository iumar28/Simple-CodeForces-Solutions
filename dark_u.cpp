#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q=0,W,I,L,R;
    int sum=0;

    cin>>n;
    int h[n];
    for(int i=1;i<=n;i++)
    {
     cin>>h[i];
    }
    cin>>q;
    for(int k=1;k<=q;k=k+2)
    {     cin >> W >> I;
            h[I] = h[I] + W;
                   }

             cin >> L >> R;
    int arraySum(int a[], int n)
    {
        int initial_sum  = 0;
        return accumulate(a, a+n, initial_sum);
    }
}
      cout << arraySum(h, );
            sum=0;
        }
    }
    return 0;
}

