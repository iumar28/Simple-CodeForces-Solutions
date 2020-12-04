#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    int n;
    cin>>n;
    if(n==1)
    {str+='a';}
    else {
        for (int i = 1; i <=n; i=i+2) {
           str+='a';
           if(i+1<=n)
           {
           str+='b';}

        }
    }
    cout<<str;
    return 0;
}