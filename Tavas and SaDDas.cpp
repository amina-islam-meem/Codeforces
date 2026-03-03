#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

       int n; cin >> n;

       map<ll,int>lucky;
       int idx = 1;

       for(int i = 1; i <= 9; i++)
            {
        for(int mask = 0; mask < (1 << i); mask++)
         {
            ll m = 0;
            for(int k = i - 1; k >= 0; k--)
             {
                int p = (mask >> k)&1;
                if(p == 1)
                    m = m*10+7;
                else
                   m = m*10+4;
            }
            lucky[m] = idx++;
        }
      }

      auto it = lucky.find(n);

      if(it != lucky.end())
      cout << it->second << nl;


    return 0;
}
