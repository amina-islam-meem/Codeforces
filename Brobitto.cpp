#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n,l,r;
        cin>>n>>m>>l>>r;

        int L1= l+((n-m)/2);
        int R1= r-((n-m)/2);
        cout<<L1<<R1<<endl;

    }
    return 0;
}
