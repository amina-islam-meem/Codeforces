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
        vll pri;
        vector<bool> prime(n + 1, true);
        for (ll i = 2;i * i <= n;i++)
            {
              if(prime[i])
               {
                for(ll j = i + i;j <= n;j += i)
                    prime[j] = false;
                }
               }

          for(ll i = 2;i <= n;i++)
            {
              if(prime[i])
                 pri.push_back(i);
            }

            ll an =0;

            for(ll i = 0 ; i< pri.size(); i++)
            {
                an += (n/pri[i]);
            }

            cout << an << nl;

    }




    return 0;
}
