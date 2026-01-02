#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int m[n];
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i];
    }
    for(int i=1;i<=n;i++)
    {
    if(m[i]!= m[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
