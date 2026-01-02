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

    int n;cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)cin >> v[i];

    vector<ll>pre(n+1,0);
    for(int i = 1; i <=n; i++)
        pre[i] = pre[i-1] + v[i-1];
        ll  t_sum = pre[n];
      ll l = 0, r = n;
      ll an = 0;

        while(l <= r)
            {
                 ll sum1 = pre[l];
                 ll sum3 = t_sum - pre[r];

              if(sum1 < sum3) l++;

              else if(sum1 > sum3) r--;
               else
                {
                  an= sum1;
                 l++;
                 r--;
                }
           }

           cout << an << nl;
    return 0;
}
