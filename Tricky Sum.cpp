#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long  n;cin>>n;
         long long  sum = (n*(n + 1)) / 2;
        long long  p=1;
        while(p<=n)
        {
            sum=sum - (2*p);
            p=p*2;
        }
        cout<<sum<<endl;
    }

    return 0;
}


