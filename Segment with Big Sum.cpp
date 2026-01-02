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


        ll n,k; cin >> n >> k;
        vector<ll>v(n);
        for(int i = 0 ; i < n ; i++)cin >> v[i];

        ll l = 0 ;
        ll r = 0;
        ll  an = INT_MAX;
        ll sum= 0;
        bool check = false;
        while(r < n)
        {
            sum += v[r];
            while(sum >=k && l <= r)
        {
            check = true;
            an = min(an, r - l + 1);
            sum -= v[l];
            l++;

        }


        r++;
        }
        if(check)
        cout << an << nl;
        else
            cout << -1 << nl;



    return 0;
}

