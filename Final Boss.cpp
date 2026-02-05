#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


bool check(ll mid,ll n,ll h,vector<ll>&v,vector<ll>&v1)
{
    ll count = 0;
    for(int i = 0 ; i < n ; i++)
        count= min(count+(1+(mid-1)/v1[i])*v[i],h);


    return count>=h;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll h,n; cin >> h >> n;

        vector<ll>v(n),v1(n);

        for(int i= 0 ; i < n; i++)cin >> v[i];
        for(int i = 0 ; i < n ; i++)cin >> v1[i];

        ll l = 0,r = 1e12;

        while(l+1 < r)
        {
            ll mid = l + (r-l)/2;

            if(check(mid,n,h,v,v1))
                r= mid;
            else
                l = mid;
        }

        cout << r << nl;


    }
    return 0;
}
