#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"Factorial of a number "<<a<<" is "<<fact<<endl;
}