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
        int n;
        ll x; cin >> n >> x;

        ll count = 0;
        ll mx = 0;

        while(n--)
        {
            ll a,b,c;
            cin >> a >> b>> c;
            count += a *(b - 1);
            ll m = b*a -c;

            mx= max(m,mx);
        }

        if(count >= x)
            {
                cout << 0 << nl;
                continue;

            }
        if(mx <= 0)
        {
            cout << -1 << nl;
            continue;
        }

        ll r = x-count;
        cout << (r+mx-1)/mx << nl;




    }
    return 0;
}
