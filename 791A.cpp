#include<iostream>
using namespace std;

int main()
{
    int limak,bob,year=0;
    cin>>limak>>bob;
    while(!(limak>bob))
    {
        limak=limak*3;
        bob=bob*2;
        year++;
    }
    cout<<year;
}