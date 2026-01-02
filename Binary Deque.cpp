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
        int n,s; cin >> n >> s;
        vector<int>v(n);

        for(int i = 0 ; i < n; i++)cin >> v[i];


   int l = 0 ;
   int r = 0;
   int an = -1;
   ll sum = 0;
   bool check = false;

   while(r<n)
   {
       sum+=v[r];
       while (sum > s && l <= r)
             {
                sum -= v[l];
                l++;
            }

            if (sum == s)
            {
                check = true;
                an = max(an, r-l+1);
            }

                r++;

    }
    if( !check) cout << -1 << nl;
    else cout << n- an << nl;
    }

    return 0;
}
