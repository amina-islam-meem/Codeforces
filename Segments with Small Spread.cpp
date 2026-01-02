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

    int n;
    ll k;
    cin >> n >> k;

    vector<ll>v(n);
    for(int i = 0 ; i < n ; i++)cin >> v[i];

    int l = 0 ;
    int r = 0;
    ll an = 0;

    multiset<ll>m;

    while(r<n)
    {
        m.insert(v[r]);
        auto mn = m.begin();
        auto mx = m.rbegin();

        if(*mx - *mn <= k)
        {
            an += (r-l+1);
        }
        else
        {
            while(l<=r)
            {
               auto Mn = m.begin();
               auto Mx = m.rbegin();

                if(*Mx - *Mn <= k)
                    break;

                m.erase(m.find(v[l]));
                l++;
            }
            mn = m.begin();
            mx = m.rbegin();
            if(*mx - *mn <= k)
                 {
            an += (r-l+1);
                }
        }
        r++;
    }
    cout << an << nl;

    return 0;
}
