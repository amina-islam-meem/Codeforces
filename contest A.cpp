#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long x=(a+b+c);
        if(x%3 ==0 && (x/3)<=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
