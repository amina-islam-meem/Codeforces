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

   int n ,k; cin >> n >> k;
   vector<int>v(n);
   for(int i = 0 ; i < n ; i++)cin >> v[i];

   int l = 0 ;
   int r = 0;
   int an = 0;
   ll sum = 0;

   while(r<n)
   {
       sum+=v[r];
       if(sum <= k)
        an +=(r-l+1);
       else
       {
           while(sum > k && l <= r)
           {
               sum -= v[l];
               l++;
           }
           if(sum <= k)
            an +=(r-l+1);
       }
       r++;
   }
   cout << an << nl;
    return 0;
}
