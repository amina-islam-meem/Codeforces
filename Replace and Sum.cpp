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
        int n,q; cin >> n >>q;
        vector<ll>a(n),b(n);

        for(int i = 0 ; i < n ; i++)cin >> a[i];
        for(int i = 0 ; i < n ; i++)cin >> b[i];



        vector<ll> m(n+1);
        for(int i = n-1; i >= 0; i--)
             m[i] = max({a[i], b[i], m[i+1]});



      vector<ll>pre(n);
      pre[0]= m[0];

      for(int i=1; i <n ; i++)
        pre[i]=pre[i-1]+m[i];

      while(q--)
      {
          int l,r;cin >> l >> r;

          ll p;
          if(l == 1)
            p = pre[r-1];
         else
            p = pre[r-1]-pre[l-2];

            cout << p << " ";
      }

      cout << nl;

    }
    return 0;
}
