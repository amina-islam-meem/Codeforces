#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n,k; cin >> n >> k;
        vll a(n),b(n);
        vector<pair<ll,ll>>vp(n);

        for(int i = 0 ; i < n ; i++)cin >> a[i];
        for(int i = 0 ; i < n ; i++)cin >> b[i];
        for(int i = 0 ; i < n ; i++)
        {
           vp[i]= {a[i],b[i]};
        }

        ll ans = 0;
        vll v;

        for(auto val : vp)
        {
            if(val.first > val.second)
            {
                ans += val.first;
                v.push_back(val.second);
            }
            else
            {
                ans += val.second;
                v.push_back(val.first);
            }
        }

        sort(v.begin(),v.end(),greater<ll>());

        for(int i = 0 ; i < k-1; i++)
            ans+= v[i];

        cout << ans+1 << nl;

    }
    return 0;
}
