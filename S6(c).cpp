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

    ll a,b ; cin >> a >> b;
    if (a > b) swap(a, b);
    ll p = ((b-a + 1)*(a+b))/2;
    ll fev = (a % 2 == 0) ? a : a + 1;
    ll lev = (b % 2 == 0) ? b : b - 1;
    ll n = ((lev - fev) / 2) + 1;
    ll sum = n * (fev + lev) / 2;
    cout << p << nl;
    cout << sum << nl;
    cout << p - sum << nl;
    return 0;
}
