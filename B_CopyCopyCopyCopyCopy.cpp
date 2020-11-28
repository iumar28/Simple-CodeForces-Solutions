#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int data;
            cin>>data;
            s.insert(data);
        }
        cout<<s.size()<<endl;
        
        
        }
    

}