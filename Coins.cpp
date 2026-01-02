#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k%2==0 && n%2==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
