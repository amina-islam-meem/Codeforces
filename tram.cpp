#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a,b;
    int maximum = 0;
    int p = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p = p-a;
        p = p+b;
        maximum = max(maximum,p);
    }
    cout<<maximum<<endl;

    return 0;
}
