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

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vll v(n+1),pre(n+1);



        for(int i = 1 ; i <= n ; i++)
        {
            cin >> v[i];
            pre[i]= max(pre[i-1],v[i]);
        }

        ll sum = 0;

         for(int i=n;i>=1;i--)
           {
            cout << max(pre[i-1], v[i]) + sum << " ";
            sum += v[i];
          }

          cout << nl;

    }
    return 0;
}


