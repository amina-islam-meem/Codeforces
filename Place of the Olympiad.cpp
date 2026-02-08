#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


bool check(ll mid,ll n,ll m,ll k)
{
    ll p = m /(mid + 1);
    ll r = m % (mid + 1);

    ll count = p*mid+ min(mid, r);

    return count >= (k + n - 1) / n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll n,m,k; cin >> n >> m >> k;



        ll l = 0,r = m;

        while(l+1 < r)
        {
            ll mid = l + (r-l)/2;

            if(check(mid,n,m,k))
                r= mid;
            else
                l = mid;
        }

        cout << r << nl;


    }
    return 0;
}

