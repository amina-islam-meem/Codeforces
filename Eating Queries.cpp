#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int binarysrch(vector<ll> &a, ll n,ll x)
{
    int low = 0;
    int high = n-1;
    ll count = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(a[mid] >= x)
        {
            count = mid;
            high = mid -1;
        }
        else
            low = mid+1;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll n,q; cin >> n >> q;
        vector<ll>v(n);
        vector<ll>pres(n);

        for(int i = 0 ; i < n ; i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        pres[0] = v[0];
        for(int i = 1 ; i < n ; i++)
            pres[i] = pres[i-1]+v[i];

        while(q--)
            {
                ll x ; cin >> x;
                ll m = binarysrch(pres,n,x);
                   if(m == -1)
                       cout << -1 << nl;
                    else
                        cout << m+1 << nl;
               }


    }
    return 0;
}
