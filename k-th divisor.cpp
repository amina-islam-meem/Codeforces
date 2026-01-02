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

    ll n,k;
    cin >> n >> k;

    vector<ll>v;
    for(ll i = 1; i <= sqrt(n);i++)
    {
        if(n% i == 0)
        {
            v.push_back(i);

            if((n/i) != i)
                v.push_back(n/i);
        }
    }

    sort(v.begin(),v.end());

     if(k <= v.size())
         cout << v[k-1]<< nl;
   else
       cout << -1 << nl;
    return 0;
}
