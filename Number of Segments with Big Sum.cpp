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

   int n ;
   ll k;
   cin >> n >> k;
   vector<ll>v(n);
   for(int i = 0 ; i < n ; i++)cin >> v[i];

   int r = 0;
   ll an = 0;
   ll sum = 0;

   for(int l = 0; l < n; l++)
    {
        while(r < n && sum < k)
        {
            sum += v[r];
            r++;
        }
        if(sum >= k)
            an += (n - r + 1);

        sum -= v[l];
    }
   cout << an << nl;
    return 0;
}

