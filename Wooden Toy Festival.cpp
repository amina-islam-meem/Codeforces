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

        for(int i = 0 ; i < n ; i++)cin >> v[i];

        sort(v.begin(),v.end());


        auto check =[&](int m)
         {
         int count = 1;
         int l = 0;
         for(int i = 0;i < n;i++)
            {
            if((v[i] - v[l]) > 2*m)
             {
               l = i;
               count++;
            }
         }
         return count<= 3;
         };



        int l = 0;
        int r = 1e9;
        int mid, an;
       while (l <= r)
            {
                 mid = l+ (r-l)/ 2;
                 if(check(mid))
                  {
                   an= mid;
                   r = mid - 1;
                  }
               else
                   l = mid + 1;

            }

       cout << an << nl;


    }
    return 0;
}
