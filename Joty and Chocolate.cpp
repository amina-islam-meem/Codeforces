#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


ll lcm (int a,int b)
{
    ll g = __gcd(a,b);
    ll l = (a/g)*b;
    return l;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n/a);
    ll y = (n/b);
    ll z = (n/(lcm(a,b)));
    ll r = ((x-z)*p );
    ll s = ((y-z)*q);
    ll t = max(z*p,z*q);

    cout <<r + s + t << nl;
    return 0;
}
