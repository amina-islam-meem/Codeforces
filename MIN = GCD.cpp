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
        ll n; cin >> n;
        vector<ll>v(n);

        for(int i = 0 ; i < n ; i++)cin >> v[i];

        sort(v.begin(),v.end());
        ll mn = v[0];

        ll g = 0;
        for(ll i = 1 ; i < n ; i++)
        {
            if(v[i] %  mn == 0)
                g = __gcd(g,v[i]);

        }


        if(g == mn)
            yes
        else
           no

    }
    return 0;
}
