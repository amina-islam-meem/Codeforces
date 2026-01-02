#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll n,k; cin >> n >> k;
        ll p = max(1LL,n-k+1);
        ll m = (n+1)/2 -(p/2);
        if(m%2 == 0 )
            yes
        else
            no


    }
    return 0;
}
