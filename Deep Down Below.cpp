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
        vector<pair<ll,ll>>v;

        for(int i = 0; i < n; i++)
            {
            int x;cin >> x;
            ll mx = 0;
            for(int j = 0; j < x; j++)
             {
                ll y;cin >> y;
                 mx = max(mx, y- j+ 1);
            }
            v.push_back({mx, x});
          }

        sort(v.begin(), v.end());

        ll cur = 0;
        ll an= 0;
        for(auto &val : v)
            {
            if(cur < val.first)
             {
                an += (val.first - cur);
                cur = val.first;
            }
            cur += val.second;
           }

        cout << an<< nl;


    }
    return 0;
}
