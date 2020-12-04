#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int upper=0,lower=0;
     double size;
    int i=0;
    string st;
    cin>>st;

    for(size_t i=0;i<st.length();i++)
   {
        if (isupper(st[i]))
        {
            upper++;

        }
        else
        lower++;
    }
    if(lower>upper)
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout<<st;
    }
   else
    {
        transform(st.begin(), st.end(), st.begin(), ::toupper);
        cout<<st;
    }

   return 0;
}