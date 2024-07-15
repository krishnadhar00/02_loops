#include<iostream>
using namespace std;
int main()
{
    int fd,ld;
    cin>>fd>>ld;
    for(int i=fd;i<=ld;i++)
    {
        cout<<i<<" "<<(char)i<<endl;
    }
}