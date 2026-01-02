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
        int n; cin >> n;
        vector<int>v(n);

        int xr = 0;
        int mx = 0;

        for(int i= 0 ; i < n ; i++)
        {
            int x; cin >> x;
            xr ^= x;
            mx = max(mx,x);

        }
        if(n%2 != 0) cout << xr << nl;
        else
        {
            if(xr == 0) cout << mx << nl;
            else cout << -1 << nl;
        }

    }
    return 0;
}
