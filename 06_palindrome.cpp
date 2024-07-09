#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int rev=0;
    while(n>0)
    {
        int d = n%10;
        rev = rev*10+d;
        n/=10;
    }
    if(a==rev)
    {
        cout<<"Palindrome number "<<endl;
    }
    else
    {
        cout<<"Not a plaindrome number"<<endl;
    }
}