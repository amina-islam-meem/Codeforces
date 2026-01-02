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

    int T; cin >>  T;
    while(T--)
    {
        int n,q; cin >> n >> q;
        vector<ll>v(n+1),pre(n+1,0);

        ll sum = 0;
        for(int i = 1 ; i <= n; i++)
        {
            cin >> v[i];
            pre[i]= pre[i-1]+v[i];
            sum += v[i];
        }

        while(q--)
        {
            int l,r,k;
            cin >> l >> r >> k;
            int len = r-l +1;


            ll sum2 =pre[r]-pre[l-1];
           ll sum3 = sum - sum2 + (len*k);

            //for(int i = 1 ; i <= n ; i++)sum+=v1[i];
            if(sum3%2 != 0)
                yes
            else
               no


        }


    }
    return 0;
}
