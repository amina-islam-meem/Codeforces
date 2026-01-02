#include<iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
    int A;cin>>A;
    if(A<100 && A>=10 )
    {
        int d = A/10;
        int g = A %10;
        cout<<d+g;
    }
    cout<<endl;
    }
    return 0;
}
