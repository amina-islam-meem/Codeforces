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

    int n;cin >> n;
    vector<ll>v(n);
    vector<ll>pre(n,0);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    int m; cin >> m;

    pre[0]= v[0];
    for(int i = 1 ; i <n ; i++)
        pre[i] = pre[i-1] + v[i];


    while(m--)
    {
        ll x; cin >> x;
        ll p = binarysrch(pre,n,x);

        cout << p << nl;
    }
    return 0;
}
