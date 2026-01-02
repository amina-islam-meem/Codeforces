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
        vector<ll>s(n);
        for(int i = 0 ; i < n ; i++)cin >> s[i];

       int l = 0 ;
       int r = 0;
       ll an = 0;
       map<ll,ll>mp;

      while(r<n)
        {
           mp[s[r]]++;

          while(mp.size()>k )
          {
             mp[s[l]]--;
             if(mp[s[l]] == 0)
               mp.erase(s[l]);
            l++;
          }

       an += (r-l + 1);
       r++;
    }
    cout << an << nl;
    return 0;
}
