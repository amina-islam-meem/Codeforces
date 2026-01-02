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
    return count+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n ; i++) cin >> v[i];
    int k ;cin >> k;
    sort(v.begin(),v.end());
    while(k--)
    {
        ll l,r; cin >> l >> r;
        auto it1 = lower_bound(v.begin(), v.end(), l);
        auto it2 = upper_bound(v.begin(), v.end(), r);

        cout << it2-it1 << " ";

    }
    return 0;
}



