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

    int n,m;
    cin >> n >>m;
    vector<int>a(n),b(m);
    for(int i = 0 ; i < n ;i++)cin >> a[i];
    for(int i =0 ; i < m;i++)cin >> b[i];
     int l = 0;
     int r = 0;
     ll ans = 0;

     while(l < n && r < m)
     {
         int c1 = 0,c2 = 0;
         int curr = a[l];
         while(l<n && a[l]== curr)
         {
             c1++;
             l++;
         }
         while(r < m && curr > b[r])
         {
             r++;
         }

         while(r<m && b[r]== curr)
         {
             c2++;
             r++;
         }


         ans += (1ll *c1*c2);
     }
     cout << ans <<nl;
    return 0;
}
