#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int d=n%10;
        if(d%2==0)
            count=count+d;
        n=n/10;
    }
    cout<<count;
}