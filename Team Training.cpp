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
        ll n ,x; cin >> n >> x;
        vector<ll>v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];

        sort(v.begin(),v.end());

        int count = 0;
        int s = 0;

       for(int i = n -1; i >= 0; i--)
            {
                s++;
                if(v[i]*s >= x)
                {
                    count++;
                    s = 0;
                }

          }

    cout << count << nl;



    }
    return 0;
}
