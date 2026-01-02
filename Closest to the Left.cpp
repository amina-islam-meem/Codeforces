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

    ll n,k;cin >> n >> k;
    vector<ll>v(n);
   // vector<int>v1(k);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    sort(v.begin(),v.end());
    for(int i = 0 ; i < k; i++)
    {
        ll x; cin >> x;


            ll an = binarysrch(v,n,x);
            cout << an << nl;



    }


    return 0;
}



