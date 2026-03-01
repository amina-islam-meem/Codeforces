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
        ll n; cin >> n;

             vll ans;

             ans.push_back(n);



            for(ll k = 0; k <= __lg(n); k++)
            {
                if((n >> k) & 1)
                {
                    ll val = n- (1LL << k);
                    if(val > 0)
                    ans.push_back(val);
                }


            }

            reverse(ans.begin(),ans.end());
             cout << ans.size()<< nl;
            for(auto val : ans)
                cout << val << " ";

            cout << nl;



    }
    return 0;
}
