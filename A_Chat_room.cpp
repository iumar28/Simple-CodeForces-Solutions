#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,b="hello";
    int i,j=0,pass=0;
    cin>>str;

    for(i=0;i<str.length();i++)
    {
        if(str[i]==b[j])
        {j++;
        pass++;

        if(pass==5)
        {break;}
    }
    }

    if(pass==5)
    {
    cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
    
    
}