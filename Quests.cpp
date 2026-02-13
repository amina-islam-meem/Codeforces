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
        ll n,c,d; cin >> n >> c >> d;

        vector<ll>v(n);

        for(int i =0 ; i < n ; i++)cin >> v[i];

        sort(v.rbegin(),v.rend());


        ll mx = v[0];
        ll mx1,m;
        if(n>1)
            mx1 = v[1];
        else
            mx1 = 0;


        if(mx >= c)
            {
            cout << "Infinity" << nl;
            continue;
           }

        ll mx2 = (mx + mx1) * (d / 2) + (d % 2 ? mx : 0);

        if(mx2< c)
            {
            cout << "Impossible" << nl;
            continue;
           }


        ll l= 0;
        ll r = d;
        ll an= 0;
        while(l<= r)
            {
            ll mid = l + (r-l)/2;

            ll p= d/(mid+1);

            ll rem = d %(mid+ 1);

            ll q;

            if(rem > 0)
                q = mx;
            else
                q = 0;

            ll count = p *(mx+mx1)+q;

            if (count>= c)
                {
                an= mid;
                l= mid+1;
                }
             else
                r= mid- 1;
            }
            cout << an << nl;
    }
    return 0;
}
