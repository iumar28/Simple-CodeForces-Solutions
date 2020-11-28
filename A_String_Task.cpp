#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='y'|| c=='Y')
    {return true;}
    return false;
}

int main()
{
    
    string str,res;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);


    for(int i=0;i<str.length();i++) {
        if(!isvowel(str[i])){
        res=res+'.';
        res=res+str[i];}
    }
    cout<<res<<endl;
    return 0;
}