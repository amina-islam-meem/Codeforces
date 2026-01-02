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
        ll a,b; cin >> a >> b;
        ll x = 1;
        ll mx = 0;
        for(int i = 0 ; i < 32;i++)
        {
            if(a&x) mx = x;

            x*=2;
        }

        if(b < mx)
        {
            cout << 3 <<nl;
            cout <<a-mx << " " << b << " " << mx << nl;

        }
        else if(b < 2*mx)
        {
            cout << 2 << nl;
            cout << a-mx << " " << b-mx << nl;
        }
        else
            cout << -1 << nl;


    }
    return 0;
}
