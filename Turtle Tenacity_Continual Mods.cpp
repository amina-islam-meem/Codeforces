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

        for(int i = 0 ; i < n ; i++) cin >> v[i];


        ll g = 0;
        for(ll val : v)
            g = __gcd(val,g);

        int count = 0;
        for(int i =0; i < n; i++)
        {
            if(v[i] == g)
                count++;
        }

       if(count >= 2)
        no
      else
        yes

    }
    return 0;
}
