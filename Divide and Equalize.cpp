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
        int n; cin >> n;
        vector<int>v(n);
      for(int i = 0;i < n;i++) cin >> v[i];

      map<int, int>mp;
      for(int i = 0;i < n;i++)
       {
         for (int j = 2;j*j <= v[i];j++)
          {
            if (v[i] % j == 0) {
               while (v[i] % j == 0) {
                  mp[j]++;
                  v[i] /= j;
               }
            }
         }

        if(v[i] > 1)
            mp[v[i]]++;
       }

        bool check= true;

      for(auto [x, y] : mp)
       {
         if(y % n != 0)
          {
            check= false;
            break;
         }
      }

      if(check)
         yes
      else
        no


    }
    return 0;
}
