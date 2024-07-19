#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    string k = to_string(n);
    while(n>0)
    {
        int d=n%10;
        sum=sum+pow(d,k.length());
        n=n/10;
    }
    cout<<sum<<endl;
    if(a==sum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not a armstrong number";
    }
}