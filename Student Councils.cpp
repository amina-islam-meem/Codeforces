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


        int n,k; cin >> k>> n;

        vector<ll>v(n);
        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        ll l = 0;
        ll r = sum/k;
        ll an = 0;
        while (l <= r)
            {
                ll mid = (l+r)/ 2;
                ll m = 0;

        for(ll val: v)
            m += min(val, mid);


        if(m>= k * mid)
            {
            an= mid;
            l = mid + 1;
            }
         else
            r = mid - 1;

         }

         cout << an << endl;


    return 0;
}
