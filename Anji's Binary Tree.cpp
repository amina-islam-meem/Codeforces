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


const int mx = 3e5 + 9;
vector<int> g[mx], op(mx);
string s;

void dfs(int u)
 {
       if(g[u][0] != 0)
            {
                int v = g[u][0];
                if (s[u - 1] != 'L')
                op[v] = op[u] + 1;
               else
                 op[v] = op[u];

               dfs(v);
             }


   if(g[u][1] != 0)
        {
          int v = g[u][1];
           if (s[u - 1] != 'R')
              op[v] = op[u] + 1;
          else
              op[v] = op[u];
            dfs(v);
        }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;

        for(int i = 0;i <= n;i++)
            {
               g[i].clear();
               op[i] = 0;
            }

       cin >> s;

       for(int i = 1;i <= n;i++)
            {
                 int l, r;cin >> l >> r;

                 g[i].push_back(l);
                 g[i].push_back(r);
             }

        dfs(1);

        int ans = INT_MAX;

         for(int i = 1;i <= n;i++)
            {
               if(g[i][0] == 0 && g[i][1] == 0)
                  ans = min(ans, op[i]);
            }

        cout << ans << nl;
    }
    return 0;
}
