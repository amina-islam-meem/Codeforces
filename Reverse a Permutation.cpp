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

        for(int i= 0 ; i < n ; i++)cin >> v[i];

        int idx = 0;


       for (int i = 0; i < n; i++)
        {
              if (v[i] != n - i)
              {
                  idx=i;
                  break;
              }

        }

    if(idx < n)
       {
              int mx = v[idx];
              int p= idx;
           for(int i = idx; i < n; i++)
              {
                   if(v[i] >mx)
                      {
                          mx= v[i];
                           p= i;
                       }
             }

             reverse(v.begin()+idx, v.begin()+p+1);
          }



     for(int val : v)
            cout << val << " ";

     cout << nl;


    }
    return 0;
}
