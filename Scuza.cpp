#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


ll binarysrch(vector<ll> &a, ll n,ll x)
{
    int low = 0;
    int high = n-1;
    ll count = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(a[mid] <= x)
        {
            count = mid;
            low = mid +1;
        }
        else
            high = mid-1;
    }
    return count+1;
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
        vector<ll>pre(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];

        //sort(v.begin(),v.end());

        pre[0] = v[0];
        for(int i = 1 ; i < n; i++)
        {
            pre[i] = pre[i-1]+v[i];
            if (i > 0)
                v[i] = max(v[i],v[i-1]);
        }



        while(q--)
        {
            ll x; cin >> x;
             ll idx = binarysrch(v,n,x);
            if(idx == 0) cout << 0 << " ";
            else
                cout << pre[idx-1] << " ";

        }
        cout << nl;


    }
    return 0;
}





