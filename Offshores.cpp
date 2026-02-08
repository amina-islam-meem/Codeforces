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
        int n,x,y; cin >> n >> x >> y;

        vector<ll>v(n);

        for(int i = 0 ; i < n ; i++)cin >> v[i];

        ll sum =0;

        for(int i = 0; i < n; i++)
                sum += v[i]/x;



            ll count = 0;
          for(int i = 0; i < n; i++)
            {
            ll mx = v[i]+ (sum- (v[i]/x))*y;

            count = max(count, mx);
        }

        cout << count << nl;

    }
    return 0;
}
