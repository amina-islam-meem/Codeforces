#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       int r =(b-a%b)%b;
       cout<<r<<endl;
    }
    return 0;
}
