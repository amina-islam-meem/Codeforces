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
        vector<ll>v(n);
        for(int i = 0 ; i < n; i++)cin >> v[i];

        ll g1 = 0;
        ll g2 = 0;
        for(int i = 0 ; i < n ; i+= 2)
        {
            g1 = __gcd(g1,v[i]);

        }

        for(int i = 1 ; i < n ; i+= 2)
        {
            g2 = __gcd(g2,v[i]);

        }
        ll an = 0;
        bool check = false;
        for(int i = 1 ; i < n ; i+= 2)
        {
            if(v[i] % g1 == 0)
                check = true;

        }

        if(!check)
            an = g1;
        else{
                check = false;
        for(int i = 0 ; i < n ; i+= 2)
        {
            if(v[i] % g2 == 0)
                check = true;

        }
        if(!check)
            an = g2;
        }


     cout << an << nl;

    }
    return 0;
}
