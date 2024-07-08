#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    while(n>0)
    {
        int d=n%10;
        count=count*d;
        n=n/10;
    }
    cout<<count;
}