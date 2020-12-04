
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int no;
    string str[4];
    
    for(int k=0;k<4;k++)
    {
        cin>>str[k];
    }
    for(int k=0;k<4;k++)
    {
        if(str[k].size()>10)
        {
        cout<<str[k][0]<<sizeof(str[k])-2;
        cout<<str[k][sizeof(str[k])-2];
        }
        else
        cout<<str[k]<<endl;
    }
    return 0;
}
