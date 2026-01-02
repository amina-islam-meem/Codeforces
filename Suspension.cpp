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
        ll n;cin >> n;
        ll y,r; cin >> y >> r;
        ll sum = (y/2)+r;
        if(sum > n)
        cout << n << nl;
        else
        cout << sum << nl;
    }
    return 0;
}