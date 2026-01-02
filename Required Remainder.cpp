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
        ll x,y,n;
        cin >> x >> y >> n;

        ll k = (n- y)/ x;
        ll m = k *x+y;
        cout << m << nl;

    }
    return 0;
}
