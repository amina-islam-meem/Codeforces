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

    int n,k; cin >> n >> k;

    vector<ll>v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];

    ll l = 0;
    ll r = v[n-1]-v[0];
    ll an = 0;


    while(l <= r)
    {
        ll mid = l +(r-l)/2;
        ll m = v[0];
        int count = 1;

        for(int i = 1; i < n; i++)
            {
            if (v[i]-m  >= mid)
             {
                count++;
                m= v[i];
            }
           }

        if (count >= k)
            {
            an= mid;
            l = mid + 1;
           }
        else
            r= mid - 1;
    }
    cout << an << nl;
    return 0;
}
