#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && b>c)||(c>b && b>a))
        {
            cout<<b<<endl;
        }
        else if((b>c && c>a)||(a>c && c>b))
            cout<<c<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
