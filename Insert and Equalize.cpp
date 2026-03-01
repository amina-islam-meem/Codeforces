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
        int n; cin >> n;
        vll v(n);

        map<ll,bool>mp;
        for(int i = 0 ; i < n ; i++)
        {
             cin >> v[i];
            mp[v[i]]= true;
        }

        if(n==1)
        {
            cout << 1 << nl;
            continue;
        }

        srt(v)
        ll g = 0;
        ll m = v[n-1];

        for(int i = 0 ; i < n; i++)
        {

            g = __gcd(m-v[i],g);
        }

        if(g == 0)
        {
            cout << 0 << nl;
            continue;
        }

        ll an =0;

        for(int i = 0; i <n-1 ;i++)
            an += (m-v[i])/g;


        ll count = 1;
        while(true)
        {
            ll val = m - count*g;

            if(mp[val] == false)
            {
                cout << an + count << nl;
                break;
            }

            count++;
        }



    }
    return 0;
}
