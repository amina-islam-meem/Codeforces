#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll l,r;cin >> l >> r;
    //int m = (r-l+1)/2;
    cout << "YES" << nl;
    for(ll i = l ; i <= r ; i+=2)
    {
        cout << i << " " << i+1 << nl;
    }
    return 0;
}
