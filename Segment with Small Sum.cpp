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


        ll n,k; cin >> n >> k;
        vector<ll>v(n);
        for(int i = 0 ; i < n ; i++)cin >> v[i];

        ll l = 0 ;
        ll r = 0;
        ll  an = 0;
        ll sum= 0;
        while(r < n)
        {
            sum += v[r];
            while(sum > k && l <= r)
        {
            sum -= v[l];
            l++;
        }

        an = max(an, r - l + 1);
        r++;
        }
        cout << an << nl;



    return 0;
}
