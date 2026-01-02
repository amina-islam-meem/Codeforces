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

    int n; cin >> n;
    vector<ll>v(n);
    for(ll i = 0 ; i < n ; i++) cin >> v[i];

    ll mx = *max_element(v.begin(), v.end());


    ll an = 0;
    ll g  = 0;

    for(ll i = 0 ; i < n ; i++)
        {
        ll d = mx - v[i];
         an += d;
          g = __gcd(g,d);
    }

    cout << an/g << " " << g << nl;

    return 0;
}
