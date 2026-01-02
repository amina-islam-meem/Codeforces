#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=1;i<n-1;i++)
    {
        int p;
        cin>>p;
        if(p>=k)
            count++;
    }
    cout<<count;
    return 0;
}
