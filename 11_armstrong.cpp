#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(a==sum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not a armstrong number";
    }
}