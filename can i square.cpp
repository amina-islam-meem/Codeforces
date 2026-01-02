#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int sum = 0;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            sum = sum + a;
        }
        long long int root = sqrt(sum);
        if((root*root)== sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
